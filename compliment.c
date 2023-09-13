#include <stdio.h>


int find_highest_order(int num)
{
    int ret = 0;
    
    if(!num)
        return ret;
    
    while(num) {
        num >>= 1;
        printf("%d\n",num);
        ret++;
    }
        
    return ret;
}


int getIntegerComplement(int num)
{
    int order, i, result = 0;
    
    order = find_highest_order(num);
    
    if(!order) 
        return 0;
    
    for(i=0; i<order; i++) {
        num ^= (1 << i);
        printf("%d\n",num);
    }
    
    return num;
}

int main(void) {
    
    int res;
    int n;
    scanf("%d", &n);
    res = getIntegerComplement(n);
    printf("Complement is %d\n", res);
    return 0;
}