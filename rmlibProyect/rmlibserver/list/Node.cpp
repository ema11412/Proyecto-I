#include "Node.h"

template <class T>
Node<T>::Node(T _value)
{
    value = _value;
}

template <class T>
Node<T>::~Node()
{
    delete pValue;
}

/*template <class T>
bool Node<T>::operator ==(T key)
{
    if (key == value)
    {
        return true;
    }
    else
    {
        return false;
    }
}

template <class T>
bool Node<T>::operator !=(T key)
{
    if (key != value)
    {
        return true;
    }
    else
    {
        return false;
    }
}
*/
template <class T>
Node<T>& Node<T>::operator =(T key)
{
    value = key;
}
