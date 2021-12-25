#include <iostream>

template <class T>
class Stack{
    private:
        int tos;
        int size;
        T *st;
        static int counter;
    public:
        Stack(int n = 10){
            tos = 0;
            size = n;
            counter++;
            st = new T[size]; // now it points to the space in heap
            //std::cout<<"I'm WALKING HERE" << std::endl;
        }
        ~Stack(){
            counter--;
            delete[] st;
            //std::cout << "RETREAT!" << std::endl;
        }
        static int getCounter(){
            return counter;
        }
        void push(T n);
        T pop();
        template <class R>
        friend void ViewContent(Stack<R> &x);
};
template <class T>
int Stack<T>::counter = 0;

template <class R>
void ViewContent(R &x);

int main(){
    std::cout << "Number of integers is: "<< Stack<int>::getCounter()<<std::endl;
    Stack<int> s1(2);
    std::cout << "Number of integers is: "<< Stack<int>::getCounter()<<std::endl;
    s1.push(5);
    s1.push(14);
    s1.push(20);
    std::cout<<s1.pop()<<std::endl;
    ViewContent(s1); // فانكشن قموصة
    //ViewContent(s1); // اخت القموصة

    Stack<char> s2;
    std::cout << "Number of integers is: "<< Stack<char>::getCounter()<<std::endl;
    s2.push('a');
    s2.push('b');
    s2.push('c');
    ViewContent(s2); // عيلة القموصة
}

template <class T>
void Stack<T>::push(T n){
    if (tos == size){
        std::cout <<"Stack is full" << std::endl;
    }else{
        st[tos] = n;
        tos++;
    }
}

template <class T>
T Stack<T>::pop(){
    int retValue;
    if(tos == 0){
        std::cout << "Stack is Empty" << std::endl;
        retValue = -1;
    } else{
        tos--;
        retValue = st[tos];
    }
    return retValue;
}

template <class R>
void ViewContent(Stack<R> &x){
    int t = x.tos;
    while(t != 0)
        std::cout<<x.st[--t]<<std::endl;
}
