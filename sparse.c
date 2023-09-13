// you can write to stdout for debugging purposes, e.g.
// printf("this is a debug message\n");
#define true 1
#define false 0

int solution(int N) {
    // Implement your solution here
    int res = 0;
    unsigned int first_val = 0;
    unsigned int second_val = 0;
    int mod = 0;
    int prev_val = 0;
    int is_sparse = false;
    for(int i=0; i<N; i++)
    {
        first_val = i;
        second_val = N-i;
        while(first_val)
        {
            mod = first_val%2;
            //printf("%d\n",mod);
            //printf("%d\n",prev_val);
            if(mod==1 && prev_val==1)
            {
                res = 0;
                break;
            }
            else
            {
                res = i;
                is_sparse = true;
            }
            prev_val = mod;
            first_val = first_val/2; 
        }
        prev_val=0;
        if(is_sparse || first_val==0)
        {
       // printf("%d\n",second_val);
        while(second_val)
        {
            mod = second_val%2;
            if(mod==1 && prev_val==1)
            {
                res = 0;
                break;
            }
            else
            {
                res = N-i;
            }
            prev_val = mod;
            second_val = second_val/2;
        }
        }
        if(res!=0)
        {
            break;
        }
    }
    return(res?res:-1);

}
