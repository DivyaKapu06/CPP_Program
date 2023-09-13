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
    char src[] = "How are you";
    char pat[] = "are";
    
    int count_pat[256] = {0};
    int count_src[256] = {0};
    
    int pat_len = strLen(pat);
    int src_len = strLen(src);
    for(int i=0; i<pat_len; i++)
    {
        count_pat[pat[i]]++;
    }

    int r=0;
    int l=0;
    int max = src_len;
    while(r<src_len)
    {
        count_src[src[r]]++;

        if(count_pat[src[r]] == count_src[src[r]])
        {
            printf("%c",src[r]);
            l++;
        if(r-l < max)
        {
            max = r-l;
        }
        }


        r++;
    }

    printf("index of string is=%d", max);
}