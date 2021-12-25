#include <iostream>

class Point{
private:
    int x, y;
public:
    // Constructors & etc
    Point();
    Point(int m, int n){
        x = m;
        y = n;
    }
    // Methods
    void setX(int m){
        x = m;
    }
    void setY(int n){
        y = n;
    }

    int getX(){
        return x;
    }
    int getY(){
        return y;
    }

};

class Line{
private:
    Point start;
    Point end;
public:
    // Constructors & etc
    // Composition Constructors
    Line():start(), end(){
        std::cout << "Line Constructor" << std::endl;
    }
    Line(int x1, int y1, int x2, int y2):start(x1,y1), end(x2,y2){
        std::cout << "Line 2nd Constructor" << std::endl;
    }
    // Methods
    void draw(){
        std::cout << "I'm a line from " << start.getX() << " " << start.getY() << " to " << end.getX() << " " << end.getY() << std::endl;
    }
};

class Rect{
private:
    Point ul;
    Point lr;
public:
    // Constructors & etc
    // Composition Constructors
    Rect(): ul(), lr(){
        std::cout << "Rect Constructor" << std::endl;;
    }
    Rect(int x1, int y1, int x2, int y2) : ul(x1,y1), lr(x2,y2){
        std::cout << "Rect 2nd Constructor" << std::endl;
    }
    // Methods
    void draw(){
        std::cout << "I'm a Rect from " << ul.getX() << " " << ul.getY() << " to " << lr.getX() << " " << lr.getY() << std::endl;
    }
};

class Circle{
private:
    Point centerP;
    int radius;
public:
    // Constructors & etc
    // Composition Constructors
    Circle(): centerP(){
        radius = 0;
        std::cout << "Circle Constructor" << std::endl;;
    }
    Circle(int m, int n, int r): centerP(m,n){
        std::cout << "Circle 2nd Constructor" << std::endl;;
    }
    // Methods
    void draw(){
        std::cout << "I'm a Circle, my Center point is in( " << centerP.getX() << ", " << centerP.getY() << ")" << std::endl;
    }
};

class Picture{
private:
    int cNum;
    int rNum;
    int lNum;
    Circle *pCircles;
    Rect *pRects;
    Line *pLines;
public:
    // inline & define #TODO
    // Constructors & etc
    // Aggregation Constructors
    Picture(){
        cNum = 0;
        rNum = 0;
        lNum = 0;
        pCircles = NULL;
        pRects = NULL;
        pLines = NULL;
    }
    Picture(int cn, int rn, int ln, Circle *pC, Rect *pR, Line *pL){
        cNum = cn;
        rNum = rn;
        lNum = ln;
        pCircles = pC;
        pRects = pR;
        pLines = pL;
    }
    // Methods
    // who is responsible to clean #TODO
    // owner doesn't mean you're the maker..., but destroyer is another tale.
    // ^ (maybe it was made and passed on the fly)
    // it all depends on implementation
    // if i'm destroying do i have privillege to delete them? composition : aggregation;
    // pluralsight, 'orielly 0= #TODO

    void setCircles(int cn, Circle *cptr){
        cNum = cn;
        pCircles = cptr;
    }
    void setRects(int rn, Rect *rptr){
        rNum = rn;
        pRects = rptr;
    }
    void setLines(int ln, Line *lptr){
        lNum = ln;
        pLines = lptr;
    }
    void paint(){
        int i;
        for (i = 0; i<cNum; i++)
            pCircles[i].draw();
        for (i = 0; i<rNum; i++)
            pRects[i].draw();
        for (i = 0; i<lNum; i++)
            pLines[i].draw();
    }

};
int main(){
    Picture myPic;
    Circle cArr[3]= {Circle(50,50,50), Circle(200,100,100), Circle(420,50,30)};
    Rect rArr[2]={Rect(30,40,170,100),Rect(50,40,170,100)};
    Line lArr[2]={Line(420,50,300,200), Line(40,500,200,300)};

    myPic.setCircles(3,cArr);
    myPic.setRects(2,rArr);
    myPic.setLines(2,lArr);

    myPic.paint();
    return 0;
}
