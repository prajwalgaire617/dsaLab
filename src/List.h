#include <iostream>
#include "../include/Node.cpp"
using namespace std;

class List
{
private:
    Node *head;
    Node *tail;

public:
    List()
    {
        this->head = NULL;
    }

    void addToHead(int data)
    {
        if (this->head == NULL)
        {
            Node *node = new Node();
            node->data = data;
            node->next = head;
            this->head = node;
            tail = head;
            cout << "Node added to head" << endl;

            return;
        }
        else
        {
            Node *node = new Node();
            Node *temp;
            temp = this->head;
            node->data = data;
            this->head = node;
            node->next = temp;
            cout << "data added to head" << endl;
        }
    }
    bool isEmpty()
    {

        Node *temp = head;
        if (temp == NULL)
        {
            cout << "List is Empty \n";
            return true;
        }
        else
        {
            cout << "List is not Empty \n\n";
            return false;
        }
    }

    void add(int data, Node *predecessor)
    {
        Node *NewNode = new Node;
        NewNode->data = data;
        Node *temp = head; // Creating a temporary node and assigning it to HEAD
        if (temp == NULL)
        {
            cout << "Error Previous Node can't be NULL \n";
            return;
        }
        else
        {
            while (temp != NULL)
            {
                if (temp == predecessor)
                {
                    NewNode->next = predecessor->next;
                    predecessor->next = NewNode;
                    cout << "New Node with data " << NewNode->data << " added successfully after Node with data " << predecessor->data << endl;
                    return;
                }
                temp = temp->next;
            }
        }
    }

    void removeFromHead()
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        cout << "Node deleted successfully \n";
    }

    void remove(int data)
    {
        int check = data;
        Node *PreviousNode;
        if (head == NULL && head->data == check)
        {
            PreviousNode = head;
            head = head->next;
            delete PreviousNode;
            cout << "Node deleted successfully \n";
        }

        Node *temp = head;
        if (temp->next != NULL)
        {
            while (temp->next != NULL)
            {
                if (temp->next->data == check)
                {
                    PreviousNode = temp->next;
                    temp->next = temp->next->next;
                    delete PreviousNode;
                    cout << check << " deleted successfully.\n";
                }
                else
                {
                    temp = temp->next;
                }
            }
        }
        else
        {
            cout << "You cannot delete from empty list \n";
        }
    }
    void addToTail(int data)
    {
        tail->next = new Node();
        tail->next->data = data;
        tail->next->next = nullptr;
        tail = tail->next;

        cout << "successfully added to tail\n";
    }

    void traversal()
    {
        Node *temp = nullptr;
        temp = this->head;
        cout << "data are:" << endl;
        while (temp != nullptr)
        {

            cout << temp->data << endl;
            temp = temp->next;
        }
    }
    bool Search(int data)
    {

        Node *temp = nullptr;
        temp = this->head;
        while (temp != NULL)
        {
            if (temp->data == data)
            {
                return true;
            }
            else
            {
                temp = temp->next;
            }
        }
        return false;
    }

    Node *retrieve(int data)
    {
        int check = data;
        Node *temp = head;
        Node *summon;
        int count = 1;
        if (temp != NULL)
        {
            while (temp != NULL)
            {
                if (temp->data == check)
                {
                    cout << check << " data retrieved: index: " << count << endl;
                    summon = temp;
                    return summon;
                }
                temp = temp->next;
                count++;
            }
            cout << check << " not found in the list \n";
        }
        return nullptr;
    }
};