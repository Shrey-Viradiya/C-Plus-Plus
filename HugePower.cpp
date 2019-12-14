#include <iostream>
using namespace std;

#define MAX 100000

int multiply(int b,int res[], int res_size){
  int carry = 0 ;

  for (int i = 0; i < res_size; i++) {
    int prod = res[i] * b + carry;
    res[i] = prod%10;
    carry = prod/10;
  }

  while(carry){
    res[res_size++] = carry%10;
    carry = carry/10;
  }

  return res_size;
}

void power(int b, int e){
  if (e == 0) {
    std::cout << "Answer: 1" << '\n';
    return;
  }

  int res[MAX];
  int res_size = 0;
  int temp = b;

  while(temp!=0){
    res[res_size++] = temp%10;
    temp = temp/10;
  }

  for (int i = 1; i < e; i++) {
    res_size = multiply(b,res,res_size);
  }

  for (int i = res_size-1; i >= 0; i--) {
    std::cout << res[i];
  }

}

int main(int argc, char const *argv[]) {
  int base,exp;

  std::cout << "Enter the base: " << '\n';
  std::cin >> base;
  std::cout << "Enter the exponent: " << '\n';
  std::cin >> exp;
  power(base, exp);
  return 0;
}
