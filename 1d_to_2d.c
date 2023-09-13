#include<stdio.h>

void printArray(int** A)
{
   for(int i=0; i<2; i++)
   {
    for(int j=0; j<3; j++)
    {
        printf("%d",A[i][j]);
        
    }
    printf("\n");
   }
    

}
int main()
{
    int arr[]={1,2,3,4,5,6};
    int count=0;
    int *p=&count;

    int **A;
    A = (int**)malloc(2*sizeof(int*));
    for(int i=0; i<2; i++)
    A[i] = (int*) malloc(3*sizeof(int));

    printf("%d",sizeof(int*));
    printf("%d",sizeof(A));
    printf("%d",sizeof(*A));
    printf("%d",sizeof(**A));
    printf("%d",sizeof(p));
    printf("\n");

    int j = 0;
    int k=0;

    for(int i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            A[i][j] = arr[k];
            k++;
        }

    }

    printArray(A);

    int S[2][3] = {{1,2,3},{4,5,6}};

    int (*ptr)[2][3]=&S;

    printf("%d\n", ptr);
    printf("%d\n", *(*(*ptr)+0));
    printf("%d\n", *(*(*ptr)+1));
    printf("%d\n", *(*(*ptr)+2));
    printf("%d\n", *(*((*ptr)+1)+0));
    printf("%d\n", *(*((*ptr)+1)+1));
    printf("%d\n", *(*((*ptr)+1)+2));
    ptr++;
    printf("%d\n", ptr);
    printf("%d\n", *ptr);

}