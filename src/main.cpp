#include <iostream>
#define __DEBUG__
#include <afdebug.hpp>

int main()
{
    DEBSTEP
    DEBPRINT("debug\n")
    printf("Hello world\n");
    DEBSTEP

    return 0;
}
