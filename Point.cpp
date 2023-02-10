#include "Point.h"
#include<iostream>
using namespace std;
// from point of h you will provide method from point
// default val whenever you have the method give these vals
// tis a constructor()
//Point::Point(const Point& point):x(point.x), y(point.y){};
Point::Point() : x(0), y(0) {};
Point::Point(int xVal, int yVal):x(xVal), y(yVal){}

int Point::getX() const{
return x;
}
void Point::setX(int xNew){
x = xNew;
}
int Point::getY() const{
return y;
}
void Point::setY(int yNew){
y = yNew;
}
int Point::dis(Point a){
int x = a.getX() + getX();
return x;
}
void change(Point *point){
	int x;
	int y;
	std::cout << "Please enter a new X integer" << "\n";
	std::cin >> x;
	std::cout << "Please enter a new Y integer" << "\n";
	std::cin >> y;
	point->setX(x);
	point->setY(y);
}
void change(Point &point){
	int x;
	int y;
	std::cout << "Please enter a new X integer " << "\n";
	std::cin >> x;
	std::cout << "Please enter a new Y integer " << "\n";
	std::cin >> y;
	point.setX(x);
	point.setY(y);
}
/*
const Point& Point::operator+(const Point& other)const{
    Point result;
    result.x = x + other.x;
    result.y = y + other.y;
    return result;
    //return (this->x + other.x && this->y + other.y);
    }

    // Point result;//creating object of point stack
    // result.setX(x + other.getX());
    // result.setY(y + other.getY());
    // return result;
    //returning values of object which is not possible in java &result would be 
    // the momery location of the stack which is what we do not what also not possible in python
    // creates new point and copies value in
    // can only do this if you are returning objects not in the heap.
    // The problem would be shallow copies: only a copy of the memory location pointing to the same memory location which are in the heap
    // a deep copy has same value but point to seperate locations- which is the ones in the stack
    /*
        array lists can only be in the heap because they grow. Huge integer just an array list and read character and insert elements in there
        vector is what needs to be created, for it to be able to grow it has to be into the heap
    */