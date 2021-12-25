#include <iostream>
using namespace std;
template <class T>
//template <class T> friend void viewContent(Stack s)
class Stack
{
private:
    int size ;
    int tos ;
    T *ptr ;
    static int counter ;

public:
    template <class R>
    friend void viewContent(Stack<R> &s);
    Stack(int n)
    {
        tos = 0;
        size=n=10;
        ptr = new T[size];
        counter++;
        cout<<" construct worked here"<<endl;
        cout<<"\n"<<endl;
    }
    Stack(Stack &z )
    {
        tos = z.tos;
        size = z.size;
        ptr = new int [size];
        for(int i = 0; i<tos ; i++)
        {
            ptr[i]=z.ptr[i];
        }
        counter++ ;
        cout<<"copy constructor worked here"<<endl;
        cout<<"\n"<<endl;
    }
    ~Stack()
    {
        delete[] ptr ;
        counter --;
        cout<<"destructor worked here"<<endl;
        cout<<"\n"<<endl;
    }
    void push (T number)
    {
        if(tos==size)
        {
            cout<<"The stack is  full"<<endl;
        }
        else
        {
            ptr[tos]=number;
            tos++ ;
        }
    }
    T pop ()
    {
        int result;
        if(tos==0)
        {
            cout<<"The stack is empty"<<endl;
            result = -1;
        }
        else
        {
            tos --;
            result = ptr[tos];
        }
        return result;
    }
    static getCounter()
    {
        return counter ;
    }
    Stack operator=(const Stack &s)
    {
        delete[] ptr;
        tos = s.tos;
        size=s.size;
        ptr = new int[size];
        for(int i=0 ; i<tos ; i++)
        {
            ptr[i]=s.ptr[i];
        }
    }

};

template <class R>
void viewContent( Stack<R> &y ) {
    int t = y.tos;
    while ( t != 0 )
    cout<< y.ptr [--t] << endl;
}
template <class T>
int Stack<T>::counter=0;
int main()
{
    Stack<int> a(2);
    a.push(1);
    a.push(3);
     cout<<"your first num is :";
    cout<<a.pop();
    cout<<endl;
    cout<<"your 2nd num is :";
    cout<<a.pop();
    cout<<endl;
    viewContent(a);
    Stack<char> b(3);
    b.push('A');
    cout<<"your first char is  : "<<b.pop()<<endl;
    b.push('B');
    cout<<"your sec char is : "<<b.pop()<<endl;
    b.push('C');
    cout<<"your thrd cahr is : "<<b.pop()<<endl;
}
