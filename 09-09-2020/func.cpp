#include <iostream>

//Hello world using function
void print_message(int a)
{
  std::cout << "Hello world!\n";
  std::cout << "Parámetro a: " << a << "\n";
}

int main(void)
{
  int m = 12;
  print_message(m);
  return 0;
}
