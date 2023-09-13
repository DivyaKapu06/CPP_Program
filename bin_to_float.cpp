#include <iostream>

using namespace std;

typedef union bin_to_float
{
    unsigned int input;
    float output;
}convert;

int bin_to_float_conv()
{
    
    convert conv;
    
    conv.input = 0x4236AE15U;
    cout << conv.input;
    return 0;
}
