#include <numberplate/Board.hpp>

void numberplate::DisplayBoard(Board& r, bool d)
{
    auto disp_line = []()
    {
        for(unsigned int i = 0 ; i < 3 ; i++)
        {
            printf("*-");
            for(unsigned int j = 0 ; j < 3 ; j++)
            {
                printf("--");
            }
        }
        printf("*\n");
    };
    auto disp_internal = [&r, &d](unsigned int large_column, unsigned int small_column)
    {
        numberplate::Number::KIND k;
        for(unsigned int i = 0 ; i < 3 ; i++)
        {
            printf("| ");
            for(unsigned int j = 0 ; j < 3 ; j++)
            {
                auto& g = r.Get(j+i*3, small_column+large_column*3);
                printf("%c ", (k=(d?g.GetCorrect():g.GetAnswer()).GetKind())==numberplate::Number::KIND::NONE?' ':static_cast<unsigned int>(k)+'0');
            }
        }
        printf("|\n");
    };

    for(unsigned int i = 0 ; i < 3 ; i++)
    {
        disp_line();
        for(unsigned int j = 0 ; j < 3 ; j++) disp_internal(i, j);
    }
    disp_line();
}
