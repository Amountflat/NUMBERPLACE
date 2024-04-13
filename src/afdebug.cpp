#include <iostream>
#define __DEBUG__
#include <afdebug.hpp>

unsigned int debug::Step::s_global = 0;

debug::Step::Step()
{
    this->m_local = 0;
}

void debug::Step::output()
{
    printf("\rstep <global|local><%d|%d>\n", this->s_global++, this->m_local++);
}

void debug::debugStepOutput(Step& s)
{
    s.output();
}
