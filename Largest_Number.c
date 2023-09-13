#include<stdio.h>
#include<stdlib.h>

int main()
{
#include <stdio.h>

int main(){
	unsigned long long int N;
	unsigned int K;
	unsigned long long num;
	unsigned long long int sum =0;
	unsigned int size =0;
	unsigned int i = 0;
	scanf("%llu %u",&N,&K);
    if(K>0)
	{
	for(unsigned int j=0; j<K; j++)
	{
		unsigned long long int i = 1;
		unsigned long long int max_sum = 0;
		
		while(N/i>0)
		{
		    sum = (N/(i*10))*i+ N%i;
		    i = i*10;
			num= N/i;
			if(sum > max_sum)
			{
				max_sum = sum;
			}
		}
		N = max_sum;
				
	}
	printf("\n%llu",N);
	}
	else
	{
		printf("\n%llu",N);
	}

}

}