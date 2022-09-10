#include <iostream>
#include "stack.h"
#include "Node.cpp"
using namespace std;

template <typename T>
class LinkedListStack:public stack  <T>{

private:
    Node *head;
  

public:
    LinkedListStack()
    {
        head = nullptr;
    }
    void push(T data)
    {
        if (head == nullptr)
        {
            head = new Node();
            head->data = data;
            Node *temp=head;
       
            return;
        }
        Node *temp = head;
        Node *node = new Node();
        node->data = data;
        head = node;
        node->next = temp;
    }

    void pop()
    {
        if (head != nullptr)
        {
            Node *temp = head;
            head = temp->next;
            delete temp;
            return;
        }
        cout << "cannot delete list is empty" << endl;
    } 
    bool isEmpty(){
        if (head == nullptr){
            cout<<"list is empty"<< endl;
            return true;
        }
        cout<<"list is not emptyp \n";
        return false;
        
    }
    int peek(){
            return head->data;
      

    }



};