#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
   int  var = 20;
   int  *ip;

   ip = &var;

   cout << "Value of var variable: ";
   cout << var << endl;

   cout << "Address stored in ip variable: ";
   cout << ip << endl;

   cout << "Value of *ip variable: ";
   cout << *ip << endl;

   int *arr;

   arr = (int * ) malloc(5 * sizeof(int));

   for (size_t i = 0; i < 5; i++) {
     arr[i] = i;
     std::cout << arr[i] << '\n';
   }

   return 0;
}
