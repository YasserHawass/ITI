#include <iostream>

using namespace std;
template <class T>
class Stack
{
    private:
        int top;
        int Size;
        T *st;
        static int counter;
    public:

        template <class R>
        friend void viewContent(Stack<R> &x);
        Stack (T n)
        {
            top =0;
            Size = n;
            st = new T[Size];
            cout <<"this is constructor of stack object with size "<<n<<endl;
            counter ++;
            cout <<"this is stack object no "<<counter<<endl;
        }

        ~Stack ()
        {
            delete [] st;
            cout <<"\nthis is the distructor "<<endl;
            counter --;
            cout <<"will destroy stack object no "<<counter;
        }
        static int getcounter()
        {
            return counter ;
        }

        void push (T );
        T pop();
};
template <class R>
void viewContent(R &x);

template <class T>
int Stack<T>:: counter =0;

int main () {
    Stack<int> s1(3);
    s1.push(3);
    s1.push(5);
    s1.push(4);
    s1.push(4);
    cout<<s1.pop() <<" poped from the stack"<<endl;
    cout <<"the counter of the stack is "<<Stack<int> :: getcounter()<<endl;
    //cout <<s1.getcounter();
    viewContent(s1);


    return 0;
}

template <class T>
void Stack<T>::push (T n)
{
    if (top == Size)
    {
        cout<<"stack is full"<<endl;
    }
    else
    {
        st [top]=n;
        cout << n <<" pushed into stack \n";
        top++;
    }
}
template <class T>
T Stack<T> ::pop()
{
    int retval;
    if (top==0){
       cout<<"stack is empty"<<endl;
       retval =-1;
    }
    else
    {
        top--;
        retval = st[top];

    }
    return retval;
}

template <class R>
void viewContent(Stack<R> &x){
    int t = x.top;
    while(t != 0)
        std::cout<<x.st[--t]<<std::endl;
}
