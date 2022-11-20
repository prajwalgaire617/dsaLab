#ifndef LinkedListBST_h
#define LinkedListBST_h
#include "AbstractBST.h"
#include "./Node.h"
#include <cstddef>

class LinkedListBST : public AbstractBST
{
public:
    Node *root;
    LinkedListBST();
    ~LinkedListBST();
    bool isEmpty();
    void display();
    void max(int &){};
    void min(int &){};
    void addBST(int, int);
    void add(Node *, Node *);
    bool searchBST(int);
    bool searchBST(Node *, int);
    void removeBST(int);
    Node *removeBST(Node *, int);
    void inorder(Node *);
    Node *minValueNode(Node *);
};

#endif
