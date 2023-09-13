/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

typedef unsigned short int Uint16;
typedef unsigned int Uint32;

Uint16 (*func)();

typedef union timebase
{
    Uint32 uint32;
    struct time32
    {
        Uint16 uint32_upper;
        Uint16 uint32_lower;
    }t32;
}timebase;

timebase time_val;

Uint16 uint32_to_uint16()
{
    time_val.uint32 = 0x4287F0A4U;
    cout << time_val.uint32 << "\n";
    cout << time_val.t32.uint32_upper << "\n";
    cout << time_val.t32.uint32_lower << "\n";
    return (time_val.t32.uint32_upper);
}

int main()
{
    func =  uint32_to_uint16;
    func();
    return 0;  
}