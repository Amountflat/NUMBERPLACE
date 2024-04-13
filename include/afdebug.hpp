#pragma once

namespace debug
{
#ifdef __DEBUG__
#include <stdio.h>
#define DEBPRINT(...) printf(__VA_ARGS__);
#define DEBSTEP debugStepOutput(::debug::debug_step);
class Step;
extern void debugStepOutput(Step& step);
class Step final
{
    private:
        static unsigned int s_global;
               unsigned int m_local;
    public:
        Step();
        Step(const Step&) = delete;
        Step(Step&&)      = delete;
        ~Step()           = default;
    private:
        void output();
    friend void debugStepOutput(Step&);
};
static Step debug_step;
#else
#define DEBPRINT(...)
#define DEBSTEP
#endif
}
