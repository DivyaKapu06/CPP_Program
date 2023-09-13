/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int fibanocci()
{
    unsigned int num = 0;
    
    unsigned int prev_val = 0;
    unsigned int curr_val = 1;
    cout<<"fibanocci series for:";
    cin>> num;
    for(unsigned int i=0; i<num; i++)
    {
        curr_val += prev_val;
        prev_val = curr_val-prev_val;
        
        cout<<curr_val<<" ";
        
    }
        
    return 0;
}
