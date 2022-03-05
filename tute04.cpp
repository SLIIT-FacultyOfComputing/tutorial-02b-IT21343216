#include<iostream>

long Factorial(int no);
long nCr(int n, int r);

int main(void)
{
  int n,r;
  std::cout<<"Enter a value for n ";
  std::cin >> n;
  std::cout << "Enter a value for r ";
  std::cin >> r;
  std::cout << "nCr = ";
  std::cout << nCr(n,r);
  std::cout << std::endl;
}
long Factorial(int no)
{
  int fac=1;
  for(int r=no;r>=1;r--)
    {
      fac=fac*r;
    }
  return fac;
}
long nCr(int n, int r)
{
  int fac1=1;
  int fac2=1;
  int fac3;
  int i=n-r;

  do{
    fac1=fac1*r;
    r--;
  }while(r>=1);

  do{
    fac2=fac2*i;
    i--;
  }while(i>=1);

  fac2=fac2*fac1;
  fac3=Factorial(n)/fac2;

  return fac3;
}