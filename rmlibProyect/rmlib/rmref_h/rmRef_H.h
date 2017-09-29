#ifndef RMREF_H_H
#define RMREF_H_H

#include <cstdlib>
#include <iostream>

class rmRef_H
{
private:
    std::string _key;
    int _size;
    void* _value;
public:

    rmRef_H();

    bool operator ==(rmRef_H ref_h);
    bool operator !=(rmRef_H ref_h);
    void operator delete(void*);
    rmRef_H& operator =(rmRef_H);

    std::string to_string();

    // Getters and setters
    std::string get_key();
    void set_key(std::string key);
    int get_size() const;
    void set_size(int _size);
    void *get_value() const;
    void set_value(void *_value);
};

#endif //RMREF_H_H
