#include <assert.h>
#include <stdio.h>

#ifndef NDEBUG
#define DEBUG
#endif

#define USE_ASSERTS

int function(int val)
{
    return val * 2;
}

int main()
{
    // #if defined(DEBUG)
#ifdef DEBUG && USE_ASSERTS
    assert(function(2) == 5);  // assert = wenn die Bedingung nicht erfuellt ist wird das Programm beendet

#endif


    return 0;
}
