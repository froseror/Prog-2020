#include <iostream>
#include <cstdlib>
//atof function
double average(double x, double y);

int main(int argc, char *argv[]) {
  double x = std::atof(argv[1]);
  double y = std::atof(argv[2]);
  double z = 0;
  z = average(x, y);
  std::cout << z << std::endl;
  return 0;
}

  double average(double a, double b)
  {
    double result = 0;
    result = (a+b)/2;
    return result;
  }
		      
