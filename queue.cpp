#include<stdio.h>
using namespace std;

template <typename T> class StandardQueue
{
    public:

    StandardQueue(int c);

 

    void insert_element(T elem)
    {
        if(capacity==rear)
        {
            printf("queue is full\n");
        }
        else
        {
            queue[rear] = elem;
            rear++;
        }
    }

    void remove_element()
    {
        if(front==rear)
        {
            printf("queue is empty\n");
        }
        else
        {
            for(int i=0; i<rear-1; i++)
            {
                queue[i] = queue[i+1];
            }
        }
    }
    
    void print_queue()
    {
        if(front==rear)
        {
            printf("queue is empty");
        }
        else
        {
            for(int i=0; i<rear-1; i++)
            {
                printf("%d",queue[i]);
            }
        }
    }
    
    private:
    int front;
    int rear;
    int capacity;
    T *queue;

    

};

 template<typename T> StandardQueue<T>::StandardQueue(int c)
    {
        rear=0;
        front=0;
        capacity=c;

        queue = new T;
    }

int main()
{
 
 StandardQueue<int> q(10);

 q.insert_element(1);
 q.insert_element(2);
 q.insert_element(3);
 q.insert_element(4);
 q.insert_element(5);

 q.print_queue();

 q.remove_element();

 q.print_queue();

 return 1;

}