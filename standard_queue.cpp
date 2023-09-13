#include <iostream>

using namespace std;

typedef unsigned short int Uint16;

template <class ElementType> class StandardQueue
{
    public:

    StandardQueue(Uint16 max_queue_sz, ElementType *queue_arr_t);

    void add_element(ElementType value);

    void remove_element();

    void is_full();

    void is_empty();

    ElementType *queue_arr;
    
    private:
    struct elements
    {
       Uint16 size;
       Uint16 head;
       Uint16 tail;
       Uint16 reserved; 
    };

    Uint16 max_queue_size;

    elements *queue;
};

template <class ElementType>
StandardQueue<ElementType>::StandardQueue(Uint16 max_queue_sz, ElementType *queue_arr_t):
             queue(new elements),
             queue_arr(new ElementType[max_queue_sz-1])
{
    queue_arr = queue_arr_t;
    
    queue->size = max_queue_sz;
    queue->head = 0;
    queue->tail = 0;
    queue->reserved = 0;
}

template <class ElementType> 
void StandardQueue<ElementType>::add_element(ElementType value)
{
    static Uint16 index = 0;
    Uint16 length = 0;
    if(queue->tail > queue->head)
    {
        length = queue->tail - queue->head;
    }
    else
    {
        length = queue->tail + queue->head;
    }

    bool is_queue_full = ((queue->head == 0) && (queue->tail == queue->size));
    is_queue_full = (is_queue_full || (length > queue->size));

    if(!is_queue_full)
    {
        queue_arr[queue->tail] = value;
        queue->tail++;
        index++;
        
    }

}

template <class ElementType> 
void StandardQueue<ElementType>::remove_element()
{
    bool is_queue_empty = (queue_arr[queue->head] == 0) && (queue_arr[queue->tail] == 0);

    if(!is_queue_empty)
    {
        queue_arr[queue->head] = 0;
        queue->head++;
        if(queue->tail >= queue->size)
        {
            queue->tail = 0;

        }
        else if(queue->head >= queue->size)
        {
            queue->head = 0;
        }
        
    }

}

Uint16 queue_array[5] = {0};

int main()
{

    StandardQueue<Uint16> queue_obj(5,queue_array);

    queue_obj.add_element(1);
    queue_obj.add_element(2);
    queue_obj.add_element(3);
    queue_obj.add_element(4);
    queue_obj.add_element(5);
    queue_obj.remove_element();
    queue_obj.remove_element();
    queue_obj.add_element(6);
    queue_obj.remove_element();
    queue_obj.add_element(7);
    queue_obj.add_element(8);
    queue_obj.remove_element();
    queue_obj.remove_element();
    queue_obj.add_element(9);
    queue_obj.add_element(10);

    queue_obj.add_element(11);

    queue_obj.remove_element();
    
    for(unsigned int i=0; i<7;i++)
    {
        cout << queue_array[i] << " ";
    }

    return 0;
}