#ifndef AbstractBST_h
#define AbstractBST_h

class AbstractBST{
    public:
    virtual bool isEmpty()=0;
    virtual void addBST(int ,int )=0;
    virtual void max(int &)=0;
    virtual void min(int &)=0;
    virtual bool searchBST(int )=0;
    virtual void removeBST(int )=0;
    virtual void display()=0;
};

#endif 