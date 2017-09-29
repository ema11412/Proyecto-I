#include "List.h"

template <class T>
LinkedList<T>::LinkedList()
{
    head = NULL;
    last = NULL;
}

template <class T>
Node<T>* LinkedList<T>::getHead()
{
    return head;
}

template<class T>
void LinkedList<T>::addNode(T value) {

    std::lock_guard<std::mutex> locker(guard);

    if(head == nullptr)
    {
        head = new Node<T>(value);
        head->next = nullptr;
        last = head;
    }
    else
    {
        if(last == head)
        {
            last = new Node<T>(value);
            last->next = nullptr;
            head->next = last;
        }
        else
        {
            Node<T>* newNode = new Node<T>(value);
            newNode->next = nullptr;
            last->next = newNode;
            last = newNode;
        }
    }
    _size++;
}

template <class T>
void LinkedList<T>::deleteNode(T value)
{

    std::lock_guard<std::mutex> locker(guard);

    if (head == nullptr)
    {
        std::cout << "Error deleting the node. The list is empty" << std::endl;
    }
    else
    {
        Node<T>* current = head;
        Node<T>* previous = nullptr;

        while (current != nullptr)
        {
            if (current->value == value)
            {
                break;
            }
            else
            {
                previous = current;
                current = current->next;
            }
        }

        if (current == nullptr)
        {
            std::cout << "Error deleting the node. The node was not found" << std::endl;
        }
        else
        {
            if (head == current)
            {
                head = head->next;
            }
            else
            {
                previous->next = current->next;
            }
            //delete current;
            _size--;
        }
    }
}

template <class T>
T LinkedList<T>::findNode(T value)
{
    Node<T>* pNode = head;

    std::lock_guard<std::mutex> locker(guard);

    while (pNode != nullptr)
    {
        if(pNode->value == value)
        {
            return pNode->value;
        }

        pNode = pNode->next;
    }
}

template<class T>
T LinkedList<T>::getPosition(int index)
{
    std::lock_guard<std::mutex> locker(guard);

    if(index == 0) {
        // Get the first element
        return this->head->value;
    } else {
        // Get the index'th element
        Node<T>* curr = this->head;
        for(int i = 0; i < index; ++i) {
            curr = curr->next;
        }
        return curr->value;
    }
}

template <class T>
bool LinkedList<T>::isInList(T value)
{
    std::lock_guard<std::mutex> locker(guard);

    Node<T>* current = head;

    while (current != nullptr)
    {
        if (current->value == value)
        {
            return true;
        }
        else
        {
            current = current->next;
        }
    }
    return false;
}

template<class T>
T LinkedList<T>::operator[](int index)
{
    return getPosition(index);
}


template <class T>
int LinkedList<T>::size()
{
    return _size;
}

template <class T>
int LinkedList<T>::ssize()
{
    return _ssize;
}

template <class T>
void LinkedList<T>::more_ssize()
{
    _ssize++;
}

template <class T>
void LinkedList<T>::less_ssize()
{
    _ssize--;
}