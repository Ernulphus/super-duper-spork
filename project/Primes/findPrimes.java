import java.util.*;
/**
 * Finds some primes
 *
 * @author Boaz Kaufman
 * @version 7.24.18
 */
public class findPrimes
{
    public static void main()
    {
        ArrayList<Integer> primes = new ArrayList();
        ArrayList<Integer> products = new ArrayList();
        final int BOUND = 3000;

        for (int m=2; m<500; m++)
        {
            for (int n=2; n<500; n++)
            {
                products.add(n*m);
            }
        }

        for (int j=2; j<BOUND; j++)
        {
            boolean isPrime = true;
            for (int c : products)
            {
                if (j == c)
                {isPrime = false;}
            }
            if(isPrime)
            {primes.add(j);}
        }
        
        System.out.println("Here are all the primes less than " + BOUND +"\n");
        int y=1;
        for(int x: primes)
        {
            System.out.print(x+"\t");
            y++;
            if (y>10)
            {
                y=1;
                System.out.println("\n");
            }
        }
    }

}
