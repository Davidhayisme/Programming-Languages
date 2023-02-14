#include "Point.h"
#include "Point.cpp"
#include<cstdio>
#include<iostream>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;
 
Point* create1(int x, int y);
Point* create2(int x, int y);

int distance(Point* p1, Point* p2);
void print(Point* p1);
void location(Point* p1);

int main(){
	Point* p1 = create1(3,4);
	Point* p2 = create2(4,5);
	printf("%d \n", distance(p1,p2));
	change(p1);
	change(p2);
	Point* p3 = create2(30,5);
	Point nums[8];
	int len = sizeof(nums)/sizeof(nums[0]);
	//printf("%d \n",len);
	int sm = -30;
	int bg = 30;
	for(int i = 0; i<8; i++){
		nums[i].setX(rand()%(bg-sm+1)+sm);
		nums[i].setY(rand()%(bg-sm+1)+sm);
	}
	Point* stare = &nums[0];
	printf("%d \n", stare->getX());
	for(int i = 0; i < len;i++){
		print(stare);
		location(stare);
		stare++;
		
	}
	// Point h = p1;
	//p1 = new Point(p1->getX(), p1->getY());
	// Point p1 = p1;
	//p2 = new Point(p2->getX(), p2->getY());
	// Point p2 = p2;
	// int p3 = p2 + p1;
	
	//printf("%d", distance(p1,p2));
	//delete p1;
	delete p2;
	delete p3;
	//cout << "kill" << " ";

	// 4) Make an array of Points and use pointers to access them. 
	// Make sure that you call at least 
	// 2 methods in a loop that access all elements of the array.
    // Point nums1[10]; // integer array declaration  
	// Point* nums2[10];
    // std::cout << "Enter ten numbers :" << std::endl;  
    // for(int i=0;i<10;i++)  
    // {  
    //    std::cout << "Enter ten numbers :";
	   
	//    / no flush needed
	//    std::cin >> nums1[i];  
    // }  
    // for(int i=0;i<5;i++)  
    // {  
    //     nums2[i]=&nums1[i];   
    // }  

}


Point* create1(int x, int y){
	Point pOne(x,y);
	//Point* Pointing;
	//Point& Pointed = pOne;
	Point* Pointing = &pOne;
	//Point* Please = Pointed;
	//std::cout << pOne.getX();
	return Pointing;
}


Point* create2(int x, int y){
	Point* pTwo;
	pTwo = new Point(x,y);
	std::cout<< pTwo->getX();
	return pTwo;
}
void print(Point* p1){
	printf("X coord of:%d Y coord of:%d \n",p1->getX(),p1->getY());
}
void location(Point* p1){
	if(p1->getX() == 0 || p1->getY() == 0)
		cout<< "No quadrant" << "\n";
	else if(p1->getX() > 0){
		if(p1->getY() > 0)
			cout<< "Quadrant 1" << "\n";
		else
			cout<< "Quadrant 2" << "\n";
	}
	else{
		if(p1->getY() > 0)
			cout<<"Quadrant 4" << "\n";
		else
			cout<<"Quadrant 3" << "\n";
	}
		
}
int distance(Point* p1, Point* p2){
	return sqrt(pow(p2->getX() - p1->getX(), 2) + pow(p2->getY() - p1->getY(), 2) * 1.0);
}
/*
int add(Point* num){

}
int subtract(){

}
*/