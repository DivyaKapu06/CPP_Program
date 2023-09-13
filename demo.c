#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void sort_words(char *words[], int count)
{
    // Waiting to be implemented
    char * word = malloc(sizeof(char));
    for(int i=0; i<count; i++)
    {
        for(int j=i; j<count; j++)
        {
            if(words[i]<words[j])
            {
                word = words[i];
                //printf("%s",word);
                words[i] = words[j];
                words[j] = word;
            }
        }
    }
}

typedef struct{
    unsigned int  age    : 4;
    unsigned char gender : 1;
    unsigned int  size   : 2;
}child_t;

#ifndef RunTests
int main()
{
    char *words[] = { "cherry", "orange", "apple" };
    child_t.age=4;
    //child.age = 4;
    int i = -1;
    +i;

    printf("%d",child.age);

    printf("%d %d",i, +i);
    
    sort_words(words, 3);

    for (int i = 0; i < 3; i++)
    {
        printf("%s ", words[i]);
    }
}
#endif