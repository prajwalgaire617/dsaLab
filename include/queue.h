 
#ifndef Queue_h
#define Queue_h
using namespace std;

template <typename T>
class queue{
protected:
    virtual void enqueue(T data) = 0;
    virtual void dequeue() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
    virtual T front() = 0;
    virtual T back() = 0;
};


#endif //
