#include <numberplace/Board.hpp>

void numberplace::DisplayBoard(Board& r, bool d, Cursor c)
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
    auto disp_internal = [&r, &d, &c](unsigned int large_column, unsigned int small_column)
    {
        unsigned short row=static_cast<unsigned short>(c.GetInfoRow());
        numberplace::Number::KIND k;
        for(unsigned int i = 0 ; i < 3 ; i++)
        {
            printf("|");
            if(row<i*3) printf(" ");
            for(unsigned int j = 0 ; j < 3 ; j++)
            {
                auto& g = r.Get(j+i*3, small_column+large_column*3);
                printf((c.GetInfoValid()==Cursor::INFORMATION::VALID_TRUE&&row==i*3+j&&(static_cast<unsigned short>(c.GetInfoColumn())>>4)==small_column+large_column*3?">%c<":row<i*3+j?"%c ":row>i*3+j?" %c":" %c "), (k=(d?g.GetCorrect():g.GetDisplay()).GetKind())==numberplace::Number::KIND::NONE?' ':static_cast<unsigned int>(k)+'0');
            }
            if(row>=(i+1)*3) printf(" ");
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
