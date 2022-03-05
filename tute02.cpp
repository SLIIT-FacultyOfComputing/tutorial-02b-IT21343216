#include<iostream>
int main(void)
{
  double salary,netSalary;
  int etype, otHrs, otRate;

  std::cout<<"Enter Employee Type: "<<std::endl;
  std::cin>>etype;
  std::cout<<"Enter Salary: "<<std::endl;
  std::cin>>salary;
  std::cout<<"Enter OtHrs: "<<std::endl;
  std::cin>>otHrs;

  switch(etype){
    case 1: otRate=1000;
          break;
    case 2: otRate=1500;
          break;
    default: otRate=1700;
          break;
  }

  netSalary = salary + otHrs*otRate;
  std::cout<<"Net Salary is "<<netSalary<<std::endl;
}