#include <iostream>
#include <math.h>
// Lab 1. Complex Example with "add" and "subtract" member functions.
class Complex{
    private:
        float real;
        float imag;

    public:
        Complex(){
            this->real = 0;
            this->imag = 0;
        }
        Complex(float r, float i){
            this->real = r;
            this->imag = i;
        }
        Complex operator+(Complex c);
        Complex operator+(float f);
        Complex operator-(Complex c);
        Complex operator-(float f);
        friend Complex operator+(float f, Complex c);
        friend Complex operator-(float f, Complex c);
        Complex& operator+=(Complex c);
        int operator==(Complex c);
        Complex operator++();
        Complex operator++(int);
        operator float();

        void setReal(float r);
        void setImag(float i);
        float getReal();
        float getImag();
        Complex add(Complex c);
        Complex sub(Complex c);
        Complex mult(Complex c);
        Complex div(Complex c);
        void print();
};
Complex operator+(float f, Complex c);
Complex operator-(float f, Complex c);

int main(void){
    Complex myComp1, myComp2, resultComp;
    myComp1.setReal(7);
    myComp1.setImag(2);
    myComp2.setReal(5);
    myComp2.setImag(3);
    std::cout << "first and second complex" << std::endl;
    myComp1.print();
    myComp2.print();
    printf("--------------\n");
    std::cout << "using +" << std::endl;
    resultComp = myComp1 + myComp2;
    resultComp.print();
    resultComp.setReal(0);
    resultComp.setImag(0);
    std::cout << "using -" << std::endl;
    resultComp = myComp1 - myComp2;
    resultComp.print();
    resultComp.setReal(0);
    resultComp.setImag(0);
    std::cout << "using + 5" << std::endl;
    resultComp = myComp1 + 5;
    resultComp.print();
    resultComp.setReal(0);
    resultComp.setImag(0);
    std::cout << "using - 5" << std::endl;
    resultComp = myComp1 - 5;
    resultComp.print();
    resultComp.setReal(0);
    resultComp.setImag(0);
    std::cout << "using + 5" << std::endl;
    resultComp =  5 + myComp1;
    resultComp.print();
    resultComp.setReal(0);
    resultComp.setImag(0);
    std::cout << "using - 5" << std::endl;
    resultComp = 5 - myComp1;
    resultComp.print();
    resultComp.setReal(0);
    resultComp.setImag(0);
    std::cout << "using == " << std::endl;
    resultComp == myComp1? printf("1 true\n"): printf("0 false\n");
    resultComp.setReal(0);
    resultComp.setImag(0);
    std::cout << "using +=" << ", similar to resultComp = resultComp + myComp1;" << std::endl;
    resultComp += myComp1; // resultComp = resultComp + myComp1;
    resultComp.print();
    resultComp.setReal(0);
    resultComp.setImag(0);
    std::cout << "using ++c1 " << std::endl;
    resultComp = ++myComp1;
    resultComp.print();
    resultComp.setReal(0);
    resultComp.setImag(0);
    std::cout << "using c1++ " << std::endl;
    resultComp = myComp1++;
    resultComp.print();
    resultComp.setReal(0);
    resultComp.setImag(0);
    std::cout << "using float() " << std::endl;
    std::cout << (float) myComp1 << std::endl;

    resultComp.setReal(0);
    resultComp.setImag(0);

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


    /*
    std::cout<<"Original Complex number: " << std::endl;
    myComp1.print();
    std::cout<<"Add function result: " << std::endl;
    resultComp = myComp1.add(myComp1);
    resultComp.print();
    std::cout<<"Sub function result: " << std::endl;
    resultComp = myComp1.sub(myComp2);
    resultComp.print();
    std::cout<<"Mult function result: " << std::endl;
    resultComp = myComp1.mult(myComp2);
    resultComp.print();
    std::cout<<"Div function result: " << std::endl;
    resultComp = myComp1.div(myComp2);
    resultComp.print();
    std::cout<<"Div function (when 0 is present) result: " << std::endl;
    myComp2.setReal(0);
    resultComp = myComp1.div(myComp2);
    resultComp.print();
    */
    return 0;
}

Complex Complex::operator+(Complex c){
    Complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag;
    return temp;
}
Complex Complex::operator+(float f){
    Complex temp;
    temp.real = real + f;
    temp.imag = imag; //so it keeps the temp similar to this.
    return temp;
}
Complex Complex::operator-(Complex c){
    Complex temp;
    temp.real = real - c.real;
    temp.imag = imag - c.imag;
    return temp;
}
Complex Complex::operator-(float f){
    Complex temp;
    temp.real = real - f;
    temp.imag = imag; //so it keeps the temp similar to this.
    return temp;
}
// friend standalone
Complex operator+(float f, Complex c){
    Complex temp;
    temp.real = c.real + f;
    temp.imag = c.imag; //so it keeps the temp similar to this.
    return temp;
}
// friend standalone
Complex operator-(float f, Complex c){
    Complex temp;
    temp.real = c.real - f;
    temp.imag = c.imag; //so it keeps the temp similar to this.
    return temp;
}
Complex& Complex::operator+=(Complex c){
    // it's better done with &
    //Complex temp;
    real = real + c.real;
    imag = imag + c.imag;
    //std::cout << "DEBUGGER HERE " << temp.real <<" "<< temp.imag << std::endl;
    //temp.print();
    //*this = temp;
    return *this;
}
int Complex::operator==(Complex c){
    if(real == c.real){
        if (imag == c.imag)
            return 1; // yes it can be short circuited but it looks cooler somehow.
    }
    return 0;
}
Complex Complex::operator++(){
    real++;
    return *this;
}
Complex Complex::operator++(int){
    Complex temp = *this;
    real++;
    return temp;
}
// special case where you don't start with return type
Complex::operator float(){
    return real;
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
Complex Complex::mult(Complex c)
{
    Complex temp;
    temp.real = c.real * this->real;
    temp.imag = c.imag * this->imag;
    return temp;
}
Complex Complex::div(Complex c)
{
    Complex temp;
    if (c.real == 0 || c.imag == 0){
        std::cout << "You can't really divide by 0 mate..." << std::endl;
        temp.real = 0;
        temp.imag = 0;
        return temp;
    }
    temp.real =  this->real / c.real;
    temp.imag =  this->imag / c.imag;
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
