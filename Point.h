#pragma once
class Point {
	private:
		int x, y;
	public:
		Point();
		Point(int xVal, int yVal);
		int getX() const;
		int getY() const;
		void setX(int xNew);
		void setY(int yNew);
		int dis(Point a);
		void change(Point*);
		void change(Point&);
		//const Point operator+(const Point & ) const;
		
};

// must have overloaded method: has same title as another method with diferent parameters
// a method with nothing
// anything in .h needs to be added to the .cpp
/*
Cow c = new Cow("cow", 10);
Cow c2 = new Cow("cow2", 20);
Cow c3 = new Cow(c); -> java way
copy constructor needed:
point.h
class Point{bool operator == ( const Point &) cout;}
point.cc
bool Point::operator==( const Point & other) const {return (this->x == other.x && this->y == other.y);}
compares actual values to determine is true or false
this object call method and other that you recieved
->>can write without the const but is the common syntax

knows what to do based on the types of values, have to write own code depending on operaror

*/