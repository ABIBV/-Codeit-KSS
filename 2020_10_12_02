/*
Reverse a stack without using extra space in O(n)
Reverse a Stack without using recursion and extra space. Even the functional Stack is not allowed.
Examples:
Input : 1->2->3->4
Output : 4->3->2->1
Input :  6->5->4
Output : 4->5->6
*/

#include <iostream>

using namespace std;

struct Node {
  int data;
  struct Node *next;

  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};

class Stack {
  Node *head;
  public:
    Stack(){
      head = NULL;
    }

    void push(int data) {
      Node *tempNode = new Node(data);
      if (head == NULL) {
        head = tempNode;
      } else {
        tempNode->next = head;
        head = tempNode;
      }
    }

    void reverse() {
      if (head == NULL) {
        cout<<"\nStack Empty"<<endl;
      } else {
        Node *next, *curr, *prev;
        curr = head;
        prev = NULL;
        while (curr != NULL) {
          next = curr->next;
          curr->next = prev;
          prev = curr;
          curr = next;
        }
        head = prev;
      }
    }

    void print(bool list = false) {
      if(head == NULL){
        cout<<"Stack Empty";
      }else {
        Node *temp;
        temp = head;
        while(temp->next != NULL) {
          if(list){
            cout<<temp->data<<"->";
          }else{
            cout<<temp->data<<endl;
          }
          temp = temp->next;
        }
        cout<<temp->data<<endl;
      }
    }
};

int main() {
  Stack S;
  int array[] = {1, 2, 3, 4, 5, 6};
  for(int itr : array) {
    S.push(itr);
  }
  S.reverse();
  S.print();
}