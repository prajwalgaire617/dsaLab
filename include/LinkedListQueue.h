 
#include <iostream>
#include "queue.h"
#include "Node.cpp"
using namespace std;

template <typename T>
class LinkedListQueue : public queue<T>
{

private:
    Node *head;
    Node *tail;
    int size;
    int index;

public:
    LinkedListQueue()
    {
        head = nullptr;
        size = 20;
        index = -1;
    }
    LinkedListQueue(int size)
    {
        head = nullptr;
        this->size = size;
        index = -1;
    }
    void enqueue(T data)
    {
        if (head == nullptr)
        {
            index++;
            head = new Node();
            head->data = data;
            tail = head;
            cout<<"successfully added to the queue"<<endl;
            return;
        }
        if (index < size - 1)
        {
            index++;
            Node *node = new Node();
            node->data = data;
            tail->next= node;
            tail=node;
            cout<<"successfully added to the queue"<<endl;
            return;
        }
        cout << "stack overflow " << endl;
        return;
    }

    void dequeue()
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
    bool isEmpty()
    {
        if (head == nullptr)
        {
            cout << "list is empty" << endl;
            return true;
        }
        cout << "list is not emptyp \n";
        return false;
    }
    bool isFull()
    {
        if (index < size-1)
        {
            cout << "list is not full" << endl;
            return false;
        }
        cout << "list is full \n";
        return true;
    }
    T front()
    {
        return head->data;
    }
    T back()
    {
        return tail->data;
    }
};
