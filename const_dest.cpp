#include <iostream>
using namespace std;
class test
{
    public:
       static void *operator new[] (size_t size)
       {
           cout<<"operaotor new called"<<endl;
           return ::operator new[](size);
       }

       test()
       {
          cout<<"constructor called"<<endl;
       }
       ~test()
       {
          cout<<"destructor called"<<endl;
       }
};

int main()
{

     test *k = new test[4];
     delete []k;
}