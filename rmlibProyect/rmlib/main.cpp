#include <iostream>
#include "rmlib.h"


using namespace std;

int main()
{
    rm_init("172.19.49.213", 10149, "", 4464);
    int q = 22;
    rm_new("rogers", &q,2);
    rm_new("stark", nullptr,2);
    rm_new("rogers", nullptr,2);

    rmRef_H hola = rm_get("rogrs");

    if (hola.get_key() != "-1")
        cout << hola.get_key() << endl;
    else
        cout << "Me cago en la cona" << endl;

    return 0;
}
