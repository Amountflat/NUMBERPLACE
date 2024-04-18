#include <stdio.h>
#include <conio.h>
#include <numberplace/Keyboard.hpp>

using namespace numberplace;

Keyboard::KEY Keyboard::Get()
{
    int g;
    switch(g=getch())
    {
        case 0x03:
            return KEY::CTRL_C;

        case 0xe0:
            switch(getch())
            {
                case 0x48:
                    return KEY::ARROW_UP;
                case 0x50:
                    return KEY::ARROW_DOWN;
                case 0x4b:
                    return KEY::ARROW_LEFT;
                case 0x4d:
                    return KEY::ARROW_RIGHT;
            }

        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'g':
        case 'h':
        case 'i':
        case 'j':
        case 'k':
        case 'l':
        case 'm':
        case 'n':
        case 'o':
        case 'p':
        case 'q':
        case 'r':
        case 's':
        case 't':
        case 'u':
        case 'v':
        case 'w':
        case 'x':
        case 'y':
        case 'z':
            return static_cast<KEY>(g-'a'+static_cast<int>(KEY::SMALL_A));

        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'G':
        case 'H':
        case 'I':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'O':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'U':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            return static_cast<KEY>(g-'A'+static_cast<int>(KEY::LARGE_A));
    }

    return KEY::SIZE;
}
