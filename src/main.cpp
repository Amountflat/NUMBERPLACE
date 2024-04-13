#include <iostream>
#include <vector>
#include <numberplate/Number.hpp>

using namespace numberplate;

int main()
{
    std::vector<Number> numbers;

    for(unsigned int i = 0 ; i < static_cast<unsigned int>(Number::KIND::SIZE) ; i++) numbers.push_back(Number());

    numbers[1].GetKind() = Number::KIND::N_1;
    numbers[2].GetKind() = Number::KIND::N_2;
    numbers[3].GetKind() = Number::KIND::N_3;
    numbers[4].GetKind() = Number::KIND::N_4;
    numbers[5].GetKind() = Number::KIND::N_5;
    numbers[6].GetKind() = Number::KIND::N_6;
    numbers[7].GetKind() = Number::KIND::N_7;
    numbers[8].GetKind() = Number::KIND::N_8;
    numbers[9].GetKind() = Number::KIND::N_9;

    for(auto n : numbers)
    {
        switch(n.GetKind())
        {
            case Number::KIND::NONE:
                printf("n is none\n");
                break;
            case Number::KIND::N_1:
                printf("n is n_1\n");
                break;
            case Number::KIND::N_2:
                printf("n is n_2\n");
                break;
            case Number::KIND::N_3:
                printf("n is n_3\n");
                break;
            case Number::KIND::N_4:
                printf("n is n_4\n");
                break;
            case Number::KIND::N_5:
                printf("n is n_5\n");
                break;
            case Number::KIND::N_6:
                printf("n is n_6\n");
                break;
            case Number::KIND::N_7:
                printf("n is n_7\n");
                break;
            case Number::KIND::N_8:
                printf("n is n_8\n");
                break;
            case Number::KIND::N_9:
                printf("n is n_9\n");
                break;
            default:
                printf("n is undefined\n");
        }
    }

    return 0;
}
