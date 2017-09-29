#include "ListHandler.h"

template <class T>
ListHandler<T>::ListHandler(){
    //list = new LinkedList<T>();
}

template <class T>
void ListHandler<T>::add(T element)
{
    list.addNode(element);
}

template <class T>
void ListHandler<T>::erase(T element)
{
    list.deleteNode(element);
}

template <class T>
T ListHandler<T>::find(T element)
{
    return list.findNode(element);
}

template <class T>
T ListHandler<T>::getPosition(int index)
{
    return list.getPosition(index);
}

template <class T>
bool ListHandler<T>::isInList(T element)
{
    return list.isInList(element);
}

template<class T>
T ListHandler<T>::operator[](int index)
{
    return getPosition(index);
}

template<class T>
int ListHandler<T>::size()
{
    return list.size();
}

template <class T>
int ListHandler<T>::ssize()
{
    return list.ssize();
}

template <class T>
void ListHandler<T>::more_ssize()
{
    list.more_ssize();
}

template <class T>
void ListHandler<T>::less_ssize()
{
    list.less_ssize();
}


