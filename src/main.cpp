#include <iostream>
#include <vector>
#include <numberplate/Identifier.hpp>

using namespace numberplate;

int main()
{
    ManagerIdentifier MI1, MI2;
    Identifier id[5];

    for(unsigned int i = 0 ; i < 2 ; i++) MI1.GetID(id[i]);
    for(unsigned int i = 2 ; i < 4 ; i++) MI2.GetID(id[i]);

    for(unsigned int x = 0 ; x < sizeof(id)/sizeof(id[0]) ; x++)
    {
        for(unsigned int y = 0 ; y < sizeof(id)/sizeof(id[0]) ; y++)
        {
            printf("id[%d] == id[%d] -> %s\n", x, y, (id[x]==id[y]?"true":"false"));
        }
    }

    return 0;
}
