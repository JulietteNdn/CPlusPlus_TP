#pragma once
#include <iostream>

using namespace std;

class Point{
	private:
		int x;
		int y;
		
	public :
		//Point();
		Point(int = 0,int = 0);
		Point (const Point &); // constructeur par copie
		~Point();
		
		int getX();
		int getY();
		void setX(int);
		void setY(int);
		void setXY(int,int);
		
		void afficheCoord();
		int& operator [](char);
		Point& operator = (const Point &);
};
