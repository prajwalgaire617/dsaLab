#include <iostream>
#include "LinkedListBST.h"
using namespace std;

LinkedListBST::LinkedListBST(){
    root = NULL;
}
LinkedListBST::~LinkedListBST(){
    delete root;
}
bool LinkedListBST::isEmpty(){
    if(root == NULL){
        return true;
    }
    else{
        return false;
    }
}
void LinkedListBST::display(){
    inorder(this->root);
}

void  LinkedListBST::addBST(int key, int value){
    Node* newNode = new Node();
    newNode->data.key = key;
    newNode->data.value = value;
    newNode->rightChild = newNode->leftChild = NULL;
    if(isEmpty()){
        this->root = newNode;
    }
    else{
        this->add(this->root,newNode);
    }
}

void LinkedListBST::add(Node *subTreeRoot, Node *newNode){
    if(subTreeRoot->data.key > newNode->data.key){
        if(subTreeRoot->leftChild !=NULL){
            this->add(subTreeRoot->leftChild,newNode);
        }
        else{
            subTreeRoot->leftChild = newNode;
        }
    }
    else{
        if(subTreeRoot->rightChild !=NULL){
            this->add(subTreeRoot->rightChild,newNode);
        }
        else{
            subTreeRoot->rightChild = newNode;
        }
    }
}

bool LinkedListBST::searchBST(int targetKey){
    return searchBST(root,targetKey);
}

bool LinkedListBST::searchBST(Node *subTreeRoot,int targetKey){
    if(subTreeRoot->data.key == targetKey){
        return true;
    }else if(subTreeRoot->data.key > targetKey){
        if(subTreeRoot->leftChild !=NULL){
            return searchBST(subTreeRoot->leftChild,targetKey);
        }
        else{
            return false;
        }
    }
    else if(subTreeRoot->data.key < targetKey){
        if(subTreeRoot->rightChild !=NULL){
            searchBST(subTreeRoot->rightChild,targetKey);
        }
        else{
            return false;
        }
    }
}


void  LinkedListBST::removeBST(int key){
     this-> removeBST(root,key);
 }

Node* LinkedListBST::removeBST(Node *root,int targetkey){
    {
  if (root == nullptr)
  {
    return root;
  }
  else if (targetkey < root->data.key)
  {
    root->leftChild = removeBST(root->leftChild, targetkey);
  }
  else if (targetkey > root->data.key)
  {
    root->rightChild = removeBST(root->rightChild, targetkey);
  }
  else
  {
    if (root->leftChild == nullptr)
    {
      Node *temp = root->rightChild;
      delete root;
      return temp;
    }
    else if (root->rightChild == nullptr)
    {
      Node *temp = root->leftChild;
      delete root;
      return temp;
    }
    else
    {
      Node *temp = minValueNode(root->rightChild);
      root->data = temp->data;
      root->rightChild = removeBST(root->rightChild, temp->data.key);
    }
  }
  return root;
}
  
}

Node* LinkedListBST::minValueNode(Node* node)
{
    Node* current = node;
  
    
    while (current && current->leftChild != NULL)
        current = current->leftChild;
  
    return current;
}

void LinkedListBST::inorder(Node *root){
    if(root != NULL){
    inorder(root->leftChild);
    std::cout << root->data.key<<" ";
    inorder(root->rightChild);
    }
}