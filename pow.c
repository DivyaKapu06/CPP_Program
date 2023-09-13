#include<stdio.h>

int pow(int base, int exp)
{
    int res = 1;
    
    for(int i=0; i<exp; i++)
    {
        res *=base;
    }
   
    return res;
}

int main()
{
    int res =  pow(12,5);
    printf("%d",res);
}