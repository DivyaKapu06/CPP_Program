#include<stdio.h>
#include<string.h>

void main()
{

    char str1[] = {{"Hello"},{"world"}};
    char str2[] = {"World"};

    strcat(str2,strcat(str1,str2));

    printf("%d\n",sizeof(str1[1]));

    printf("%s",str2);

    int a = !(10+(-1));
    printf("%d",a);
    int i = ++a + a;
    printf("%d",i);


}

/*int main()
{
    unsigned int n = 3;
    --n;
    if(n)
    printf("%d",n);
    main();
}*/