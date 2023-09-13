#include<stdio.h>
#include<string.h>

int strLen(const char* s)
{
    int i=0;
    while(s[i])
    {
        i++;
    }

    return i;
}

char* remove_duplicates(const char* a)
{
    int count[256] = {0};

    int n=strLen(a);

    char* dup = malloc(n*sizeof(char));
    printf("%d",&dup);

    for(int i=0; a[i]!='\0'; i++)
    {
        count[a[i]]++;
    }

    int j=0;

    for(int i=0; i<n; i++)
    {
        //printf("%d",count[a[i]]);

        if(count[a[i]]>=1)
        {
            dup[j] = a[i];
            printf("%c",dup[j]);
            count[a[i]] = 0;
             j++;
            
        }
       
        
    }
    
    return dup;
}

int main()
{
    char* str = "silence is a source of great strength";

    char* s = (char*)remove_duplicates(str);
   // printf("%d",s);

   for(int i=0; i<strlen(s); i++)
   {
      printf("%c",s[i]);
   }
}