#include<stdio.h>
#include<stdbool.h>
#include<malloc.h>

int solve (char* S, char k) {
    int count = 0;
   // Write your code here

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
    int count =0;
    
    char* S = (char*)malloc(200000 * sizeof(char));
    char k;
    // scanf("%d", &T);
    scanf("\n%s", S);
    scanf("\n%c", &k);
    printf("%c", k);
    for(unsigned int i =0; S[i]; i++)
    {
        if(S[i]==k)
        {
            count +=1;
        }
    }

    printf("%d",count);

    /*for(int t_i = 0; t_i < T; t_i++)
    {
        
        
       
        
        
       // scanf("%c", &k);

      //  int out_ = solve(S, k);
        printf("%d", out_);
        printf("\n");
    }*/
}