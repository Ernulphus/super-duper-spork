//Boaz Kaufman
//Just for practice, I'm rewriting my java primes program in c++! wheee compsci

//update: wow the compiler is giving me a lot of feedback that I don't
//know how to fix.  I will give up for tonight.
#include <iostream>

using namespace std;

void main()
{
std::vector<int> primes;
std::vector<int> products;
final int BOUND = 2000;

for (int m=2; m<500; i++) {
  for (int n=2; n<500; n++){
    products.add(n*m);
  }
}

for (int j=2; j<BOUND; j++)
{
  boolean isPrime = true;
  for (int c : products)
  {
    if (j==c)
    {isPrime = false;}
  }
  if(isPrime)
  {primes.add(j)}
}

std::cout << "Here are all the primes less than" << BOUND << "\n";
int y=1
for (int x : primes)
{
  std::cout << x << '\t';
  y++;
  if (y>10)
  {
    y=1;
    std::cout << '\n';
  }
}
}
