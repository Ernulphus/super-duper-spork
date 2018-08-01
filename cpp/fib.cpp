// Boaz Kaufman
// 7.31.18
// Simple Fibonacci Calculator or something?
#include <iostream>

int main()
{
int fibs [20];
std::cout << "A bit of the Fibonacci sequence!\n";

fibs[0] = 1;
fibs[1] = 1;
for (int n=2; n<20; n++)
{
  fibs[n] = fibs[n-2]+fibs[n-1];
}

for (int c: fibs)
{  std::cout<< c <<"\n";}
}
