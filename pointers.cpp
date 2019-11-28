#include <iostream>
#include <cstdlib>
#include <memory>

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

   // Memory Allocation using malloc, calloc, free have been deprecated since C++11
   int *arr;

   arr = (int * ) malloc(5 * sizeof(int));

   for (size_t i = 0; i < 5; i++) {
     arr[i] = i;
     std::cout << arr[i] << '\n';
   }

   // Method currently in use for Memory Allocation

   int *arr2 = new int[10];
   delete[] arr2;

   // Memory Allocation using allocator

   allocator<int> alloc;
   int *arr3 = alloc.allocate(10);
   // use arr as you want to...
   for(int i=0;i<10;i++) alloc.destroy(arr3+i);
   alloc.deallocate(arr3, 10);

   return 0;
}
