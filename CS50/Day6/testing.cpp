#include <iostream>
using namespace std;
class Stack{
private:
    int top;
    int Size;
    int *st;
    static int counter;
    friend void viewContent ( Stack& f );
public:
    void settop(int top);
    void gettop();
    Stack(int n=10){
    top=0;
    Size=n;
    st=new int[Size];
    counter++;
    cout<<" construct worked here"<<endl;
}
    ~Stack(){
    delete[]st;
    cout<<" destructor worked here"<<endl;
    counter--;
}

static int getcounter(){
return counter;
}
    void push(int);
    int pop();
};
                 // void Stack::settop(int x){
                        // top=x;

                 // void Stack::gettop(){
                          // return top ;

int Stack::counter=0;
void Stack::push(int n){
if(top==Size){
    cout<<"stack is full"<<endl;
}
else {
    st[top]=n;
    top++;
}
}
void viewContent( Stack& f ) {
int t = f.top;
while ( t != 0 )
cout<< f.st [--t] << endl;
}
int Stack::pop(){
int Back;
if(top==0){
    cout<<"stack is empty"<<endl;
    Back=-1;
}
else{
    top--;
    Back =st[top];
}
return Back;
}
int main()
{
    int i,n;
    Stack a(2);
    a.push(1);
    a.push(3);
    cout<<Stack::getcounter()<<endl;
    viewContent(a);
    cout<<endl;
    cout<<"your first num is :";
    cout<<a.pop();
    cout<<endl;
    cout<<"your 2nd num is :";
    cout<<a.pop();
    cout<<endl;
    Stack b(2);
cout<<Stack::getcounter()<<endl;
    b.push(7);
    b.push(5);
    viewContent(b);
}
