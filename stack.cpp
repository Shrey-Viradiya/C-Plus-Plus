#include <iostream>
#include <stack>
using namespace std;

void showStack(stack <int> s){
  while(!s.empty()){
    cout << s.top();
    s.pop();
    cout << '\t';
  }
  cout << '\n';
  // return 0;
}

int main() {
  stack <int> s;

  s.push(10);
  s.push(25);
  s.push(5);
  s.push(14);
  s.push(85);
  s.push(23);

  cout << "Stack Content" << '\n';
  showStack(s);

  cout << "\nStack Size\t" << s.size();
  cout << "\nStack top\t" << s.top();
  s.pop();

  cout << "\nUpdated Stack: " << '\n';
  showStack(s);

  return 0;
}
