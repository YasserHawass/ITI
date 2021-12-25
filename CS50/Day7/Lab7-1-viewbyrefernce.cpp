#include <iostream>

class Stack2{
    private:
        int tos;
        int size;
        int *st;
        static int counter;
    public:
        Stack2(int n = 10){
            tos = 0;
            size = n;
            counter++;
            st = new int[size]; // now it points to the space in heap
            std::cout<<"I'm WALKING HERE" << std::endl;
        }
        Stack2(Stack2& z){
            tos = z.tos;
            size = z.size;
            counter++;
            st = new int[size]; // now it points to the space in heap
            std::cout<<"'I'm WALKING HERE'  said the copy constructor" << std::endl;
        }
        ~Stack2(){
            counter--;
            delete[] st;
            std::cout << "RETREAT!" << std::endl;
        }
        static int getCounter(){
            return counter;
        }
        void operator=(Stack2 s);
        void push(int n);
        int pop();
        friend void ViewContent(Stack2 &x);
        friend void ViewContent_c(Stack2 x);
};
int Stack2::counter = 0;
void ViewContent(Stack2 &x); // call by reference
void ViewContent_c(Stack2 x); // call by name - bitwise copy

int main(){
    std::cout << "Counter is : " << Stack2::getCounter() << std::endl;
    Stack2 s1(2), s2;
    std::cout << "Counter is : " << Stack2::getCounter() << std::endl;
    s1.push(5);
    s1.push(14);
    s1.push(20);
    //std::cout<<s1.pop()<<std::endl;
    ViewContent(s1);

}

void Stack2::operator=(Stack2 s){
    delete[] this->st;
    this->tos = s.tos;
    this->size = s.size;
    this->st = new int[size];
    for(int i = 0; i<tos;i++){
        this->st[i] = s.st[i];
    }
}
void Stack2::push(int n){
    if (tos == size){
        std::cout <<"Stack is full" << std::endl;
    }else{
        st[tos] = n;
        tos++;
    }
}

int Stack2::pop(){
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

void ViewContent(Stack2 &x){
    int t = x.tos;
    while(t != 0){
        // that will traverse the stack as an array, and won't use any pops, all items are safe
        std::cout<<x.st[--t]<<std::endl;
    }

}
void ViewContent_c(Stack2 x){
    int t = x.tos;
    while(t != 0){
        // that will traverse the stack as an array, and won't use any pops, all items are safe
        std::cout<<x.st[--t]<<std::endl;
    }

}
