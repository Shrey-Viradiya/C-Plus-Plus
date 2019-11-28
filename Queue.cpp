#include <iostream>
#include <queue>

using namespace std;

void showq(queue <int> q){
  while (!q.empty()) {
    std::cout << q.front() << '\t';
    q.pop();
  }
  std::cout << '\n';
}

int main(int argc, char const *argv[]) {
  queue <int> Q;

  Q.push(10);
  Q.push(20);
  Q.push(30);
  Q.push(40);
  Q.push(50);
  Q.push(60);
  Q.push(70);

  std::cout << "Contents of the Queue" << '\n';
  showq(Q);

  std::cout << "Size of the Queue: " << Q.size() << '\n';
  std::cout << "Front element: " << Q.front() << '\n';
  std::cout << "Last element" << Q.back() << '\n';

  std::cout << "Removing some elements" << '\n';
  Q.pop();
  Q.pop();

  std::cout << "Contents of the Queue" << '\n';
  showq(Q);

  std::cout << "Size of the Queue: " << Q.size() << '\n';
  std::cout << "Front element: " << Q.front() << '\n';
  std::cout << "Last element" << Q.back() << '\n';

  return 0;
}
