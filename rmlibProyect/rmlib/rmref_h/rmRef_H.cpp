#include "rmRef_H.h"

rmRef_H::rmRef_H()
{
    _key;
    _value = nullptr;
    _size = 0;
}

void rmRef_H::operator delete(void * ptr)
{
    free(ptr);
}

bool rmRef_H::operator!=(rmRef_H ref_h)
{
    if ((ref_h.get_key() != _key))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool rmRef_H::operator==(rmRef_H ref_h)
{
    if ((ref_h.get_key() == _key))
    {
        return true;
    }
    else
    {
        return false;
    }
}

rmRef_H& rmRef_H::operator=(rmRef_H ref_h)
{
    _key = ref_h.get_key();
    _value = ref_h.get_value();
    _size = ref_h.get_size();
}

std::string rmRef_H::get_key() {
    return _key;
}

void rmRef_H::set_key(std::string key) {
    _key = key;
}

int rmRef_H::get_size() const {
    return _size;
}

void rmRef_H::set_size(int _size) {
    rmRef_H::_size = _size;
}

void *rmRef_H::get_value() const {
    return _value;
}

void rmRef_H::set_value(void *_value) {
    rmRef_H::_value = _value;
}

std::string rmRef_H::to_string()
{
    return _key + "," + std::to_string(_size) + ",";
}
