#include <iostream>
using namespace std;

void isPowerof4(int n){
  if((n>0) && !((n & (n-1))) && !((n-1)%3)) std::cout << "Yes" << '\n';
  else std::cout << "No" << '\n';
}

int main(){
  int n;
  cin>>n;

  isPowerof4(n);

  std::cout << "----" << '\n';
  for (size_t i = 0; i < 100; i++) {
    std::cout << i << '\n';
    isPowerof4(i);
  }
  return 0;
}
