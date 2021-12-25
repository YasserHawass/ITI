#include <iostream>
// Lab 9. Example of: Base, Derived, and [calculateSum()] -> [optional]
class GeoShape{
protected:
    float dim1;
    float dim2;
public:
    // Constructors & Destructor
    GeoShape(){
        std::cout<< "GEO SHAPE WALKKING HERE!" << std::endl;
        dim1=dim2=0;
    }
    GeoShape(float x){
        std::cout<< "GEO SHAPE (1) WALKKING HERE!" << std::endl;
        dim1=dim2=x;
    }
    GeoShape(float x, float y){
        std::cout<< "GEO SHAPE (1,2) WALKKING HERE!" << std::endl;
        dim1=x;
        dim2=y;
    }
    ~GeoShape(){
        std::cout<<"Good bye blue world" <<std::endl;
    }
    // Setters & Getters Methods
    void setDim1(float x){
        dim1 = x;
    }
    void setDim2(float x){
        dim2 = x;
    }
    float getDim1(){
        return dim1;
    }
    float getDim2(){
        return dim2;
    }
    // Methods
    float calculateArea(){
        return 0;
    }
};
class Triangle : public GeoShape{
public:
    // Constructors & Destructor
    Triangle(float b, float h) : GeoShape(b,h){
        std::cout<<"Triangle!"<<std::endl;
    }
    ~Triangle(){
    std::cout<<"Bye Triangle!"<<std::endl;
    }
    // Methods
    float calculateArea(){
        return 0.5 * dim1 * dim2;
    }
};
class Rect : public GeoShape{
public:
    // Constructors & Destructor
    Rect() : GeoShape(){
        std::cout<<"Rectangle!"<<std::endl;
    }
    Rect(float x, float y) : GeoShape(x,y){
        std::cout<<"Rectangle(1,2)!"<<std::endl;
    }
    ~Rect(){
        std::cout<<"Bye Rectangle!"<<std::endl;
    }
    // Methods
    float calculateArea(){
        return dim1*dim2;
    }
};
class Square: private Rect{
public:
    // Constructors & Destructor
    Square(float x) : Rect (x,x){
        std::cout<<"Square!"<<std::endl;
    }
    ~Square(){
        std::cout<<"Bye Square!"<<std::endl;
    }
    // Setters & Getters Methods
    void setSquareDim(float x){
        dim1= dim2 = x;
    }
    float getSqureDim(){
        return dim1;
    }
    // Methods
    float calculateArea(){
        return Rect::calculateArea();
    }
};
class Circle : private GeoShape{
/*  Although it's not preferred in OOP (violates low accessibility principle)
    but it's quite a neat implementation and much cleaner [now there's no Base->GeoShape()]
*/
public:
    // Constructors & Destructor
    Circle():GeoShape(){
        std::cout<<"Circle!"<<std::endl;
    }
    Circle(float r):GeoShape(r){
        std::cout<<"Circle(1)!"<<std::endl;
    }
    ~Circle(){
        std::cout<<"Bye Circle!"<<std::endl;
    }
    // Setters & Getters Methods
    void setRadius(float r){
        dim1 = dim2 = r;
    }
    float getRadius(){
        return dim1;
    }
    // Methods
    float calculateArea(){
        return 22/7*dim1*dim2;
    }
};

// functions -v

float calculateSum(Circle &c, Rect &r, Triangle &t){
    /*
    you could specify the set objects and use their public methods and sum the returns
    or you could make it a friend function? but it will be really messy if wanted so with args and loop? a bit overkill
    also setting another public variable holding the area, which is honestly a messy thing!
    if i wanted it dynamically 3 objects and since dim1, dim2 are private, maybe google virtual function & dynamic binding?
    */
    return c.calculateArea() +r.calculateArea()+t.calculateArea();
}

int main(){
    Circle c1;
    Rect r1(5,5);
    Triangle t1(2,5);
    /*
    // in case getting asked for user input in Lab.
    float dim1, dim2;
    printf("please type dim1\n");
    fflush(stdin);
    scanf("%f", &real);
    printf("please type dim2\n");
    fflush(stdin);
    scanf("%f", &dim2);
    */
    c1.setRadius(5);
    std::cout<<c1.calculateArea()<< std::endl;
    std::cout<<calculateSum(c1,r1,t1)<< std::endl;
    return 0;
}
