#include <iostream>
using namespace std;
#include <math.h>
// Lab 1. Complex Example with "add" and "subtract" member functions.
class Complex{
    private:
        float real;
        float imag;

    public:
        void setReal(float r);
        void setImag(float i);
        float getReal();
        float getImag();
        Complex add(Complex c);
        Complex sub(Complex c);
        void print();
};

int main(void){
    Complex myComp1, myComp2, resultComp;
    myComp1.setReal(7);
    myComp1.setImag(2);
    myComp2.setReal(5);
    myComp2.setImag(3);
    /*
    // in case getting asked for user input in Lab.
    float real, imag;
    printf("please type real part\n");
    scanf("%f", &real)
    printf("please type imag part\n");
    scanf("%f", &imag)
    myComp1.setReal(real);
    myComp1.setImag(imag);
    */
    resultComp = myComp1.add(myComp2);
    resultComp.print();
    resultComp = myComp1.sub(myComp2);
    resultComp.print();
    return 0;
}

void Complex::setReal(float i){
    real = i;
}
void Complex::setImag(float i){
    imag = i;
}
float Complex::getReal(){
    return real;
}
float Complex::getImag(){
    return imag;
}

Complex Complex::add(Complex c)
{
    Complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag;
    return temp;
}
Complex Complex::sub(Complex c)
{
    Complex temp;
    temp.real = real - c.real;
    temp.imag = imag - c.imag;
    return temp;
}
void Complex::print()
{
    if(imag<0){
        cout<<real<<" - "<<fabs(imag)<<"i"<<endl;
    }else{
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
}
