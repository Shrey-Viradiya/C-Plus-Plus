#include<iostream>
using namespace std;

long long fasterPower(int a,int b){
  long long res = 1;

  while(b>0){
  int lastbit = (b&1);
  if(lastbit) res = res * a;
  a *= a;
  b = b>>1;}
  return res;
}

int main(){
  int a,b;

  std::cin >> a >> b;

  std::cout << fasterPower(a,b) << '\n';
}
