#ifndef LISTHANDLER_H
#define LISTHANDLER_H

#include "List.cpp"

template <class T>
class ListHandler
{
private:
    LinkedList<T> list;
public:
    ListHandler();
    T operator[](int index);

    void add(T element);
    void erase(T element);
    T find(T element);
    T getPosition(int index);

    bool isInList(T element);
    int size();
    void print();

    int ssize();
    void more_ssize();
    void less_ssize();
};

#endif //LISTHANDLER_H
