#include<iostream>
int main(void)
{
  float cm,inches;
  
  std::cout<<"Enter a length in cm: "<<std::endl;
  std::cin>>cm;

  inches = cm/2.54;
  std::cout<<"Length in inches is "<<inches<<std::endl;
}