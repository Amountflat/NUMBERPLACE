#pragma once

#include <numberplate/Square.hpp>

namespace numberplate
{
    class Board
    {
        public:
            typedef std::reference_wrapper<Square> ReferenceSquare;
            typedef std::vector<ReferenceSquare>   Squares;
            typedef std::vector<Squares>           SmallRow;
            typedef std::vector<Squares>           SmallColumn;
            typedef std::vector<Squares>           SmallSquare;
            typedef std::vector<SmallRow>          LargeRow;
            typedef std::vector<SmallColumn>       LargeColumn;
            typedef std::vector<SmallSquare>       LargeSquare;

        private:
            std::vector<Square> m_squares;
            LargeRow            m_largerow;
            LargeColumn         m_largecolumn;
            ManagerIdentifier   m_midentifier;

        public:
            Board ();
            Board (const Board&) = delete;
            Board (Board&&)      = delete;
            ~Board()             = default;

        private:
            // static void    Swap      (Squares&,     Squares&);
            // static void    Swap      (SmallRow&,    SmallRow&);
            // static void    Swap      (SmallColumn&, SmallColumn&);
            static Squares ProductSet(Squares,      Squares);

        public:
            Square& Get    (unsigned int x, unsigned int y);
            void    Shuffle();
    };
}
