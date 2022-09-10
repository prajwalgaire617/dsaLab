#ifndef Stack_h
#define Stack_h
using namespace std;

template <typename T>
class stack{
protected:
    virtual void push(T data) = 0;
    virtual void pop() = 0;
    virtual bool isEmpty() = 0;
    virtual T peek() = 0;
};


#endif // 
