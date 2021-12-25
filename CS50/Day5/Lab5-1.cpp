#include <iostream>
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
        Complex mult(float n);
        Complex div(float n);
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
    std::cout<<"Original Complex number: " << std::endl;
    myComp1.print();
    std::cout<<"Add function result: " << std::endl;
    resultComp = myComp1.add(myComp1);
    resultComp.print();
    std::cout<<"Sub function result: " << std::endl;
    resultComp = myComp1.sub(myComp2);
    resultComp.print();
    std::cout<<"Mult function result: " << std::endl;
    resultComp = myComp1.mult(2);
    resultComp.print();
    std::cout<<"Div function result: " << std::endl;
    resultComp = myComp1.div(2);
    resultComp.print();
    std::cout<<"Div function (when 0 is present) result: " << std::endl;
    resultComp = myComp1.div(0);
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
Complex Complex::mult(float n)
{
    Complex temp;
    temp.real = n * this->real;
    temp.imag = n * this->imag;
    return temp;
}
Complex Complex::div(float n)
{
    Complex temp;
    float tn = n;
    if (tn == 0){
        std::cout << "You can't really divide by 0 mate..." << std::endl;
        temp.real = 0;
        temp.imag = 0;
        return temp;
    }
    temp.real =  this->real / tn;
    temp.imag =  this->imag / tn;
    return temp;
}

void Complex::print()
{
    if(imag<0){
        std::cout<<real<<" - "<<fabs(imag)<<"i"<<std::endl;
    }else{
        std::cout<<real<<" + "<<imag<<"i"<<std::endl;
    }
}
