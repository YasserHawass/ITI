#include <iostream>

template <class T>
class Stack{
private:
    int tos;
    int size;
    T *st;
    static int counter;
public:
    Stack();
    Stack(int n);
    ~Stack();
    static int getCounter();
    Stack(Stack &);
    void push(T);
    T pop();
    Stack& operator = (Stack&);
    friend void ViewContent(Stack);
};
template <class T>
int Stack<T>::counter = 0;
template <class T>
void ViewContent(Stack<T>);

int main(){
    Stack<int> s1(5);
    std::cout << "Number of integers is: "<< Stack<int>::getCounter()<<std::endl;
    s1.push(10);
    s1.push(3);
    s1.push(2);

    std::cout << s1.pop() << std::endl;

    Stack<char> s2;
    std::cout << "Number of integers is: "<< Stack<char>::getCounter()<<std::endl;
    s2.push('a');
    s2.push('b');
    s2.push('c');

    std::cout << s1.pop() << std::endl;

    return 0;
}
// why can't have default arguments here?
template <class T>
Stack<T>::Stack(){
    tos = 0;
    size = 10;
    st = new T[size];
    counter++;
}
template <class T>
void Stack<T>::push(T){
    if (tos == size){
        std::cout <<"Stack is full" << std::endl;
    }else{
        st[tos] = T;
        tos++;
    }
}
