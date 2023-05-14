#include <iostream>
#include "SampleClass.h"

int main()
{    
    auto *sample = new SampleClass;
    delete sample;

    return 0;
}

