#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>

int solve (char* S, char k) {
    int count = 0;
   // Write your code here
   //printf("%c",k);
   for(int i = 0;S[i];i++)
   {
       //printf("%c",S[i]);
       if(S[i]==k)
       {
          count +=1;
       }
   }
   return(count);
}

int main() {
    int T;
    scanf("%d", &T);
    for(int t_i = 0; t_i < T; t_i++)
    {
        char* S = (char*)malloc(200000 * sizeof(char));
        scanf("\n%s", S);
        char k;
        scanf("\n%c", &k);

        int out_ = solve(S, k);
        printf("%d", out_);
        printf("\n");
    }
}