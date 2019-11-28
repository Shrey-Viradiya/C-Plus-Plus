#include <iostream>
#include <algorithm>

int main(int argc, char const *argv[]) {
  std::cout << "Arrays: " << '\n';

  int a[10];

  for (int i = 0; i < 10; i++) {
    a[i] = 0;
    std::cout << a[i]<< '\n';
  }

  std::cout << '\n';

  int size;

  std::cout << "Enter the Size" << '\n';
  std::cin >> size;

  int arr[size];

  for (int i = 0; i < size; i++) {
    std::cin >> arr[i];
  }

  std::sort(arr,arr+size);

  for (int i = 0; i < 10; i++) {
    std::cout << arr[i]<< '\n';
  }

  return 0;
}
