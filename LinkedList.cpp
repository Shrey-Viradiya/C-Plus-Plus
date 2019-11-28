#include <iostream>
using namespace std;

struct node {
  int data;
  node *next;
};

class LinkedList {
private:
  node *head,*tail;

public:
  LinkedList (){
    head = NULL;
    tail = NULL;
  }

  void insertAtLast(int n){
    node *temp = new node;
    temp->data = n;
    temp->next = NULL;

    if (head == NULL) {
        head = temp;
        tail = temp;
    }
    else{
      tail->next = temp;
      tail = temp;
    }
  }

  void printList(){
    node *iter = head;
    while(iter!=NULL){
      std::cout << iter->data << '\n';
      iter = iter->next;
    }
  }

  void insertAtFirst(int n){
    node *temp = new node;
    temp->data = n;
    temp->next = head;
    head = temp;
  }

  int removeLast(){
    node *iter = head;

    while(iter->next != tail) iter = iter->next;

    int temp = tail->data;

    tail = iter;
    tail->next = NULL;

    return temp;
  }

  int removeFirst(){
    int temp = head->data;
    node *x = head;
    head = head->next;

    x->next = NULL;
    free(x);
    return temp;
  }
};

int main(int argc, char const *argv[]) {
  LinkedList a;

  a.insertAtLast(2);
  a.insertAtLast(5);
  a.insertAtFirst(1);
  a.insertAtFirst(0);
  a.insertAtFirst(-1);
  a.printList();
  std::cout << a.removeFirst() << '\n';
  std::cout << a.removeLast() << '\n';
  a.printList();
  return 0;
}
