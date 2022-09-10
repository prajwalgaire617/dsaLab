#include <iostream>
#include <string>

#include "ArrayStack.h"
#include "LinkedListStack.h"
using namespace std;

int main(){
    //ArrayStack<int> obj;
    //obj.push(20);
    //obj.push(10);
    //obj.push(30);
    //obj.pop();
   //cout<<"top of stack is "<< obj.peek()<<endl;

    //ArrayStack<string> obj1;
    //obj1.push("hello");
    //obj1.push("world");
    //cout<<obj1.peek()<<endl;


   LinkedListStack <int>stack;
   stack.push(5);
   stack.push(10);
   stack.push(11);
   stack.push(12);
   stack.pop();
   cout<<stack.peek()<<endl;


}