#include <iostream>
using namespace std;

int main(int argc, char const *argv[]) {
  int base,exp;
  std::cout << "Enter the base: " << '\n';
  std::cin >> base;

  std::cout << "Enter the exponent: " << '\n';
  std::cin >> exp;

  int result = 1;

  for (size_t i = 0; i < exp; i++) {
    result *= base;
  }

  std::cout << "Answer: " << result << '\n';
  return 0;
}
