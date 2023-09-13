
#include<stdio.h>
#include<stdlib.h>

#define INITIAL_SIZE 10u

typedef struct{
    size_t capacity;
    size_t size;
    int *arr;
}dynamic_array;



void init_array(dynamic_array *arr_ptr);

void init_array(dynamic_array **arr_ptr)
{
    dynamic_array * array = malloc(sizeof(dynamic_array));
    if(array!=NULL)
    {
        array->capacity = INITIAL_SIZE;
        array->size = 0;
        array->arr = (int*)malloc(INITIAL_SIZE*sizeof(int));
    }
    *arr_ptr = array;
}

void insert_item(dynamic_array* a, int item)
{
     //int* arr = a;
     if(a->size==a->capacity)
     {
        a = realloc(a,a->capacity);
     }
     a->arr[a->size++]=item;
}

void delete_item(dynamic_array* a)
{
     //int* arr = a;
     if(a->size!=0)
     {
        a = realloc(a,a->capacity);
     }

}

int main()
{
    dynamic_array *array;
    init_array(array);
    insert_item(array,10);

    printf("%d", array->capacity);
    printf("%d", array->size);
    printf("%d", array->arr[array->size-1]);
}

