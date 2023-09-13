/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int dec_to_bin()
{
    unsigned int num = 0;
    unsigned int num_temp[32] = {0};
    unsigned int base = 1;
    
    cout<< "Enter Decimal Number:";
    cin>> num;
    
    
    unsigned int i = 1;
    
    while(num > 0)
    
    {
        num_temp[i] = num%2;
        num = num/2;
        i++;
    }
    
    for(i = 32; i>0; i--)
    {
        cout<< num_temp[i];
    }
        
    return 0;
}
