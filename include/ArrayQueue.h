 
#include <iostream>
#include "queue.h"
using namespace std;

template <typename T>
class ArrayQueue : public queue<T>
{
private:
    T *array = nullptr;
    int size;
    int top;
    int rear;

public:
    ArrayQueue()
    {
        this->size = 20;
        array = new T[size];
        top = -1;
        rear = -1;
    }
    ArrayQueue(int size)
    {
        this->size = size;
        array = new T[size];
        top = -1;
        rear = -1;
    }
    void enqueue(T data)
    {
        if (top == -1 && rear == -1)
        {
            top++;
            rear++;
            array[rear] = data;
            cout << "successfully enqued" << endl;
            return;
        }
        if (size > rear)
        {
            rear++;
            array[rear] = data;
            cout << "successfully enqued" << endl;
            return;
        }
        cout << "stack overflow";
        return;
    }
    void dequeue()
    {

        if (top > -1 && rear > -1)
        {
            if (top == rear)
            {
                top = -1;
                rear = -1;
                cout << "successfully removed " << endl;
                return;
            }
            if (top < rear)
            {
                top++;
                cout << "successfully removed" << endl;
                return;
            }
        }
        cout << "stack underflow: " << endl;
        return;
    }
    T front()
    {
        return array[top];
    }
    T back()
    {
        return array[rear];
    }
    bool isEmpty()
    {
        if (top > -1)
        {
            cout<<"list is not empty \n";
            return false;
        }
        return true;
            cout<<"list is empty \n";
    }
    bool isFull()
    {
        if (rear == size - 1)
        {
            cout<<"list is full \n";
            return true;
        }

            cout<<"list is not full \n";
        return false;
    }
};
