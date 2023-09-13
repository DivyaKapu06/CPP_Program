#include <stdio.h>

int main(){
	int num;
	int *a;
	int flag = 0;
	unsigned long long count = 0;
	unsigned long long max_count = 0;
	unsigned long long res = 0;
	scanf("%d", &num);              	                  // Reading input from STDIN
	//printf("number of songs %d.\n", num);       // Writing output to STDOUT
	 a = (int*)malloc(num*sizeof(int));
	for(int i = 0; i < num; i++)
	{
		scanf("%d", &a[i]);
	}
   if(num > 1)
   {
	for(int i=0; i< num; i++)
	{
		for(int j=i+1; j<=num;j++)
		{
            if(a[i] == a[j])
			{
				count +=1;
				flag = 1;
			}

		}
        
		if(flag ==1)
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
	}
	else
	{
		res = 1;
		//printf("yes");
	}
	printf("\n%d",res);
    
}
