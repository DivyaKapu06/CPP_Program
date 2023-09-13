#include<stdbool.h>
#include<malloc.h>

int Solve (int N, int* A) {
   // Write your code here
   int temp = 0;
   for(int i =0 ; i<N ; i++)
   {
    for(int j=i+1; j<N; j++)
    {
       if(A[i] > A[j])
       {
            temp = A[j];
            A[j] = A[i];
            A[i] = temp;
       }
    }
   }
   for(int i =0 ; i<N; i++)
   {
       if(A[i]>0)
       {
           temp = A[i];
           break;
       }
   }
   return temp;
}

int main() {
    int N;
    scanf("%d", &N);
    int *A = (int *)malloc(N*sizeof(int));
    for (int i = 0; i < N; ++i) {
        scanf("%d", &A[i]);
    }
    int out_ = Solve(N, A);
    printf("%d\n", out_);
}