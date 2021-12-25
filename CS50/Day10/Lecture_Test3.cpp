#include <iostream>

using namespace std;
class Stackd
{
private:
    int top ;
    int size;
    double *st;
    static int counter;
public:
    Stackd(int n =10)
    {
        top=0;
        size=n;
        st=new int [size];
        counter ++;

    }
    ~Stackd()
    {
        delete st;
        cout<<"distructor "<<endl;
        counter --;
        cout<<"destroy stack obj num"<<counter;
    }
    static int getcounter()
    {
        return counter ;
    };
    void push (double );
    double pop();
    friend void viewContent ( Stackd x );
};

int Stackd::counter=0;

void viewContent ( Stackd x )
{
    int t = x.top;
    while ( t != 0 )
        cout<< x.st [--t] << endl;

}

void Stackd ::push (int n )
{
    if (top == size )
    {
        cout<<"full stack"<<endl;

    }
    else
    {
        st[top]=n;
        top++;
    }
}
int Stackd::pop()
{
    int retval;
    if (top==0)
    {
        cout<<"Stack empty"<<endl;
        retval=-1;
    }
    else
    {
        top--;
        retval=st[top];
    }
    return retval;
}

int main()
{
    Stackd s1(3);
    s1.push(4);
    s1.push(5);
    s1.push(10);
    s1.pop();
    viewContent (s1);

cout << "----"<<endl;

    Stackd s2(3);
    s2.push(4);
    s2.push(5);
    s2.push(10);

    viewContent (s2);

    cout << "----"<<endl;

cout<<Stackd::getcounter();

    return 0;
}
