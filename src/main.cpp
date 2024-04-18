#include <iostream>
#include <vector>
#include <numberplate/Keyboard.hpp>

using namespace numberplate;

int main()
{
    Keyboard::KEY g;
    Keyboard keyboard;

    while(true)
    {
        printf("\ninput:");
        g = keyboard.Get();
        if(static_cast<int>(Keyboard::KEY::LARGE_A)<=static_cast<int>(g)&&static_cast<int>(g)<=static_cast<int>(Keyboard::KEY::LARGE_Z))
            printf("%c\n", static_cast<int>(g)-static_cast<int>(Keyboard::KEY::LARGE_A)+'A');
        else if(static_cast<int>(Keyboard::KEY::SMALL_A)<=static_cast<int>(g)&&static_cast<int>(g)<=static_cast<int>(Keyboard::KEY::SMALL_Z))
            printf("%c\n", static_cast<int>(g)-static_cast<int>(Keyboard::KEY::SMALL_A)+'a');
        else if(g==Keyboard::KEY::ARROW_UP)
            printf("up\n");
        else if(g==Keyboard::KEY::ARROW_DOWN)
            printf("down\n");
        else if(g==Keyboard::KEY::ARROW_LEFT)
            printf("left\n");
        else if(g==Keyboard::KEY::ARROW_RIGHT)
            printf("right\n");
        else
            printf("%d\n", static_cast<int>(g));
        switch(g)
        {
            case Keyboard::KEY::CTRL_C:
                exit(0);
        }
    }

    return 0;
}
