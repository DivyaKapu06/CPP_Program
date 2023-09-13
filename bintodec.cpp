/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int binary_to_decimal()
{
    unsigned int num = 0;
    unsigned int num_temp = 0;
    unsigned int base = 1;
    
    cout<< "Enter Binary Number:";
    cin>> num;
    
    
    unsigned int i = 0;
    
    while(num > 0)
    
    {
        num_temp += ((num)&(0x1)) * base;
        num = num/10;
        base = base * 2;
    }
    
    cout<< num_temp << "\n";
        
    return 0;
}
