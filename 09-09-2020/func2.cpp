#include <iostream>
//average function
double average(double a, double b); 

int main (void)
{
  double x = 9.8, y = 10.76, z = 0;
  z = average(x, y);
  std::cout << z << std::endl;
  return 0;
}

double average(double a, double b)
{
  double average = (a+b)/2;
  return average;
}
  
