#include<stdio.h>

int strLen(const char* s)
{
    int i=0;
    while(s[i])
    {
        i++;
    }

    return i;
}

int main()
{
    char src[] = “How are you”;
    char pat[] = “are”;
    
    int count_pat[256] = {0};
    int count_src[256] = {0};
    
    int pat_len = strlen(pat);
    int src_len = strlen(src);
    for(int i=0; i<patlen; i++)
    {
        count[pat[i]]++;
    }

    int r=0;
    int l=0;

    while(r<src_len)
    {
        count[src[r]]++;

        if(count[pat[r]] == count[src[r]])
        {
            printf("%c",count[src[r]]);
        }

        r++;
    }
}