#ifndef POINTHPP
#define POINTHPP

#include <iostream>
#include <string>
#include <sstream>

using namespace std;


class Point {
	
	protected : 
		int x_;
		int y_;
		
	public :
		int getX();
		int getY();
		Point();
		Point(int x, int y);
		Point getPoint() ;
		void setX(int x);
		void setY(int y);
};

#endif
