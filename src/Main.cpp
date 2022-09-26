 
#include <iostream>
#include <string>

#include "ArrayQueue.h"
#include "LinkedListQueue.h"
using namespace std;

int main(){

   LinkedListQueue<int>queue(5);
   queue.enqueue(10);
   queue.enqueue(20);
   queue.enqueue(30);
   queue.enqueue(40);
   queue.enqueue(50);
   queue.enqueue(50);
   queue.dequeue();
   cout<<queue.front()<<endl;
   cout<<queue.back()<<endl;
   queue.enqueue(60);
   cout<<queue.isEmpty()<<endl;
   cout<<queue.isFull()<<endl;



   ArrayQueue<string>queue2;
   queue2.dequeue();
   queue2.enqueue("ram");
   queue2.enqueue("john");
   queue2.enqueue("cena");
   queue2.enqueue("randy");
   queue2.enqueue("orton");
   queue2.dequeue();
   cout<<queue2.front()<<endl;
   cout<<queue2.back()<<endl;
   cout<<queue2.isEmpty()<<endl;
   cout<<queue2.isFull()<<endl;



}
