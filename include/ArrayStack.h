#include <iostream>
#include "stack.h"
using namespace std;

template<typename T>
class ArrayStack: public stack<T> {
    private:
        T *array=nullptr;
        int size;
        int index=-1;
    public:
        ArrayStack(){
            this->size=20;
            array=new T[size];
        }
        ArrayStack(int size){
            this->size=size;
            array=new T[size];
        }
        void push(T data){
            if(size>index){
                index++;
                array[index]=data;
                return;
            }
            cout<<"Stack overflow: "<<endl;
            return;
        }
        void pop(){
            if(index>-1){
                index--;
                return;
            }
            cout<<"stack underflow: "<<endl;
            return;
        }
        T peek(){
                return array[index];
        }
        bool isEmpty(){
            if(index>-1){
                return false;
            }
            return true;
        }
};