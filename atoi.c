 #include <stdio.h>
 int main()
 {
unsigned int val = 10000000;
unsigned int temp =0;
unsigned int rev =0;
for(int i=7,j=0; i>=0,j<=7;i--,j++)
{
  temp = val>>i;
  printf("%d",temp);
  rev |=temp<<j;
  printf("%d",rev);
}

 }