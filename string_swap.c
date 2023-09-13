#include<stdio.h>
#if 0
void swap(char *str1, char *str2)
{

//printf("str1 is %d, str2 is %d", str1, str2);
char *temp = str1;
str1 = str2;
str2 = temp;

}
#endif

#define VAL 32

char* strcat(char* str1,const char* str2)
{
    int len = (strlen(str1));
    char* dest = (char*) str1;
    for(int i=0; str2[i]!='\0'; i++)
    {
        str1[len++] = str2[i];
    }

    return dest;
}

int main()
{
//char *str1 = "geeks";
//char *str2 = "forgeeks";
//printf("str1 is %d, str2 is %d", str1, str2);
//swap(str1, str2);
//printf("str1 is %d, str2 is %d", str1, str2);
//printf("str1 is %s, str2 is %s", str1, str2);
//getchar();

  /*char val[][10] = { {"knowledge", "is"},
               {"is","power"},
               {"power", "all"}};

  char **s = malloc(3*sizeof(char));
  //char **p; 
  //p = s; 
  /*printf("%s ", ++*p); 
  printf("%s ", *p++); 
  printf("%s ", *p); 
  printf("%s ", ++*p);
  printf("%s ", *p++);
  printf("%s ", *p); */

/*int i=0;
  printf("%s ", s[i++]); 
  printf("%s ", s[i++]); 
  printf("%s ", s[i]); */
  
  char arr = 'g';

  arr &=~VAL;

  printf("%c",arr);
  printf("%d",~VAL);
  
  char str1[20] = "knowledge";
  char str2[] = "power";
 
  printf("%s",strcat(str1,str2));

  int *r[3];

  for(int i=0; i<3;i++)
  {
      r[i] = (int*)malloc(4*sizeof(int));
  }

  for(int i=0; i<3; i++)
  {
    for(int j=0; j<4; j++)
    {
        r[i][j] = j;
    }
  }

  for(int i=0; i<3; i++)
  {
    for(int j=0; j<4; j++)
    {
        printf("%d", r[i][j]);
        
    }
    printf("\n");
  }

  int row=3, c=4;

  int** arr1 = (int**)malloc(row*sizeof(int*));
  for(int i=0; i<row; i++)
  {
    arr1[i] = (int*) malloc(c*sizeof(int));
  }

  int** arr2;
  int* ptr;

  int len = sizeof(int*)*row + sizeof(int) * c * row;

  arr2 = (int**) malloc(len);

  ptr = (int*)(arr2 + row);

  for(int i=0; i<row;i++)
  {
       arr2[i] = (ptr + c *i);
      //printf("%d ",arr2[i]);
  }

  int count=0;
  for(int i=0; i<row;i++)
  {
    for(int j=0; j<c; j++)
    {
        arr2[i][j] = count++;
    }
  }

 for(int i=0; i<row;i++)
  { 
    for(int j=0; j<c; j++)
    {
       printf("%d ", *(*(arr2+i)+j));
    }
  }


return 0;
}
