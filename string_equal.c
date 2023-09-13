#include<stdio.h>

int find_adj_elem(int *S, int *T,int N)
{
    int adj_elem = 0;
    int elem_index = 0;
    int ad_flip = 0;
    for(int i=0; i<N; i++)
	{
      	if(S[i]!=T[i])
		{
			if(elem_index+1==i && !ad_flip)
			{
				ad_flip = 1;
                adj_elem = i;
			}
				elem_index = i;
		}
    }
    if(ad_flip)
    {
        return adj_elem;
    }
    else
    {
        return -1;
    }
}

int find_dis_elem(int *S, int *T,int i)
{
    int adj_elem = 0;
    int elem_index = -1;
    int ad_flip = 0;
    
    if(*S!=*T)
	{
		if(elem_index+1==i && !ad_flip)
		{
		    ad_flip = 1;
		    adj_elem = i;
		}
		else
		{
            elem_index = i;
        }
	}
    
    if(ad_flip)
    {
        return -1;
    }
    else
    {
        return elem_index;
    }
}
int main()
{
    int N=4;
	int X=3;
	int elem_index;
    int flip_once=0;
	int count=0;
	int distinct_flip=0;
	int ad_flip;
	int temp;   
    int S[] ={1,0,1,0,1,1};
    int T[] ={0,0,0,1,1,0};


    int elem = find_adj_elem(S,T,N);
    if(elem!=-1)
    {
        temp = S[elem-1];
        S[elem-1] = S[elem];
        S[elem] = temp;
        count++;
    }
    int cost=0;

    for(int i=0; i<N; i++)
    {
        elem = find_dis_elem(&S[i],&T[i],i);

        if(elem != -1 && cost<=X)
        {
            if(S[elem] == 1)
            {
                S[elem] = 0;
            }
            else
            {
                S[elem] = 1;
            }
            cost++;
            count++;
        }
    }

    int is_equal = 1;

    for(int i=0; i<N; i++)
    {
        if(S[i]!=T[i])
        {
            is_equal = 0;
        }
    }
   
	printf("%d\n",is_equal? count:-1);

  }