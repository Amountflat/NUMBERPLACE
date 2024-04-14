#include <iostream>
#include <vector>
#include <numberplate/Square.hpp>

using namespace numberplate;

int main()
{
    Square square;
    std::vector<Square> vs;
    Number::KIND kinds[] =
    {
        Number::KIND::NONE,
        Number::KIND::N_1,
        Number::KIND::N_2,
        Number::KIND::N_3,
        Number::KIND::N_4,
        Number::KIND::N_5,
        Number::KIND::N_6,
        Number::KIND::N_7,
        Number::KIND::N_8,
        Number::KIND::N_9,
    };

    for(auto c : kinds) for(auto a : kinds)
    {
        square.GetCorrect().GetKind() = c;
        square.GetAnswer ().GetKind() = a;

        vs.push_back(square);
    }

    for(auto s : vs)
    {
        printf("correct = %d, answer = %d\n", s.GetCorrect(), s.GetAnswer());
    }

    return 0;
}
