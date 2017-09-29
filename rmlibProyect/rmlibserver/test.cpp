#include <iostream>
#include "container/InfoContainer.h"
#include "list/ListHandler.cpp"
#include <vector>

using namespace std;

void func(void *d)
{
    std::string &s = *static_cast<std::string*>(d);
    // It is more common to make s a pointer too, but I kept the reference
    // that you have.
}

int main()
{
    std::string s = "Hi";

    func(&s);

    cout<<"-\n";
    int a = 5;
    cout<< &a << endl;
    cout << (string)(&a)<<endl;


    return 0;
}
