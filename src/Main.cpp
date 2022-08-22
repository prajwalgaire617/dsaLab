#include <iostream>
#include "List.h"
using namespace std;

int main(int argc, char** argv){
    List *list=new List();
    list->isEmpty();
    list->addToHead(8);
    list->addToHead(11);
    list->addToTail(12);
    list->addToTail(18);




    Node *predecesor=list->retrieve(7);
    list->add(15,predecesor);

    list->traversal();


    cout<<(list->Search(2)==1?"true data found":"false not found")<<endl;
    list->removeFromHead();
    list->isEmpty();

}

