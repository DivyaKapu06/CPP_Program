#include<iostream>

using namespace std;

typedef unsigned short int Uint16;
template<class T>
class LinkedList;

template<class T> class ListNode
{
    friend class LinkedList<T>;
    
public:

    ListNode(T);
    T get_data();

private:
    T data;
    ListNode *next_ptr;
};

template <class T>
ListNode<T>::ListNode(T data_t)
{
    data = data_t;
    next_ptr = 0;
}

template <class T> class LinkedList
{
    public:

    LinkedList();

    void insert_begin(T val); 

    void insert_new(T val);

    void insert_end(T val);

    void print();

    bool is_empty();

    private:

    ListNode<T> *head; 
    ListNode<T> *end; 
    //ListNode<T> *current;
};


template <class T>
LinkedList<T>::LinkedList()
{
    head = NULL;
    end = NULL;

    return;
}

template <class T>
void LinkedList<T>::insert_begin(T val)
{
    if(is_empty())
    {
        ListNode<T> *temp =  new ListNode<T>(val);  
        head = temp;
        end = temp;
    }
    else
    {
        ListNode<T> *temp =  new ListNode<T>(val);  
        temp->next_ptr = head;
        head = temp;
    }

}



template<class T>
void LinkedList<T>::insert_new(T val)
{
    if(is_empty())
    {
        insert_begin(val);
    }
    else
    {
        if(val < head->data)
        {
            insert_begin(val);
        }
        else if(val >= end->data)
        {
            insert_end(val);
        }
        else
        {
            ListNode<T> *current = head;

            ListNode<T> *newNode = new ListNode<T>(val);
        
            while(current != end)
            {
                if((newNode->data < current->next_ptr->data) && (newNode->data >= current->data))
                {
                    ListNode<T> *next = current->next_ptr;
                    current->next_ptr = newNode;
                    newNode->next_ptr = next;
                    break;
                }

                current = current->next_ptr;

            }
        }
    }
}

template<class T>
void LinkedList<T>::insert_end(T val)
{
    if(is_empty())
    {
        ListNode<T> *temp =  new ListNode<T>(val);
        head = temp;
        end = temp;
    }
    else
    {
        ListNode<T> *temp = new ListNode<T>(val);
        end->next_ptr = temp;
        end = temp;        
    }
}

template<class T>
void LinkedList<T>::print()
{
    if(is_empty())
    {
        cout << "List is empty";
    }
    
    ListNode<T> *next = head;

    while(next!=NULL)
    {
        cout << next->data;
        cout << " ";
        cout << next->next_ptr;
        next = next->next_ptr;
    }
}

template <class T>
bool LinkedList<T>::is_empty()
{
    return((head == NULL)&&(end==NULL));
}

int main()
{
    LinkedList<Uint16> list_obj;

    list_obj.insert_new(10);
    list_obj.insert_new(30);
    list_obj.insert_new(20);
    

    list_obj.print();

}