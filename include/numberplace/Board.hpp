#pragma once

#include <numberplace/Square.hpp>
#include <numberplace/Cursor.hpp>

namespace numberplace
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
            static bool    DuplicateJudgment  (Squares);
            static Squares SumSet             (Squares,  Squares);
            static Squares ProductSet         (Squares,  Squares);
            static Squares ProductRowAndColumn(SmallRow, SmallColumn);

        public:
            bool    DuplicateJudgment();
            Square& Get              (unsigned int        x, unsigned int        y);
            Square& Get              (Cursor::INFORMATION x, Cursor::INFORMATION y);
            void    Shuffle          ();
            Board&  AutomaticAnswer  ();
    };

    void DisplayBoard       (Board& r_board, bool disp_correct = false, Cursor cursor = Cursor());
    void DisplayCorrectBoard(Board& r_board);
}
