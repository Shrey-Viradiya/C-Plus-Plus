#include <iostream>
using namespace std;

bool isPowerof2(int n){
  if(n && (n & (n-1)) == 0){
    // lets the no is x.If x is power of 2,then x & (x-1) must be equal to zero
    return true;
  }
  else{
    // If x isn't power of 2,then x & (x-1) will be greater than or equal to x
    return false;
  }
}

int main(){
  int n;
  cin >> n;

  if(isPowerof2(n)){
    std::cout << "Yes" << '\n';
  }
  else{
    std::cout << "No" << '\n';
  }

  return 0;
}
