#ifndef NODE_H
#define NODE_H

#include <cstdlib>

template <class T>
class Node
{
public:
    Node<T>* next;
    T value;
    T* pValue = &value;

    Node(T _value);
    ~Node();

    bool operator ==(T key);
    bool operator !=(T key);
    Node<T>& operator =(T key);
};

#endif //NODE_H
