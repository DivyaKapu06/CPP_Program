#include<stdio.h>
#include<stdlib.h>

#define MY_SIZEOF(type) ((char*)(&type+1)-(char*)&type)

#define size_t unsigned long

typedef struct {
	int a;
	int b;
	double c;
	char str[10];
} EXAMPLE1, *pEXAMPLE1;

typedef struct {
	char str[10];
	double nums[5];
	int a;
	int b;
	double c;
} EXAMPLE2, *pEXAMPLE2;

void* aligned_malloc(size_t size, size_t align)
{

   void* mem = malloc(size+sizeof(void*)+(align-1));

   void **a = (void**)(((size_t)mem+sizeof(void*)+(align-1))& ~(align-1));

   ((void**)a)[-1] = mem;
   return a;

}

void aligned_free(void *a)
{
    free(((void**)a)[-1]);
}


int main()
{

void* old_mem1, *old_mem2;
void* new_mem1, *new_mem2;

EXAMPLE1 a;
EXAMPLE2 b;

printf("sizeof EXAMPLE1=%d sizeof EXAMPLE2=%d\n", MY_SIZEOF(a), MY_SIZEOF(b));

old_mem1 = (pEXAMPLE1)malloc(sizeof(a));
old_mem2 = (pEXAMPLE2)malloc(sizeof(b));

printf("old_mem1 address=%p old_mem2 address=%p\n",(void*)old_mem1, (void*)old_mem2);

new_mem1 = (pEXAMPLE1)aligned_malloc(sizeof(a),8);
new_mem2 = (pEXAMPLE2)aligned_malloc(sizeof(b),8);

printf("new_mem1 address=%p new_mem2 address=%p\n", (void*)new_mem1, (void*)new_mem2);


}