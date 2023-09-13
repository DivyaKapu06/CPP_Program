#include <stdio.h>
#include<stdlib.h>

int main(){

	int num = 9;
	int a[9] = {2,2,2,5,5,5,3,3,3};
	unsigned long int count = 0;
    unsigned long int res = 0;
    int val = 0;
    int flag = 0;
    unsigned long int max_count = 0;
    int index = 0;
   // printf("%d",curr_count);
	for(int i=0; i< num; i++)
	{
        for(int j = i+1; j<= num; j++)
        {
            if((a[i]==a[j]))
            {
                count +=1;
                val = a[i];
                flag = 1;
            }
         /*   if(a[j]!=val)
            {
                index = j;
                i = index-1;
                break;
            }*/
        }
     if(flag == 1)
     {
       i += count;
       if(count > max_count)
        {
            max_count = count;
            res = 1;
            count = 0;
        }
       else if(count == max_count)
       {
            res +=1;
            count = 0;
       }
       flag = 0;
     }
    }
    printf("\n%d",res);

}