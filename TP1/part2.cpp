#include <iostream>
#include "Point.hpp"

using namespace std;

void swap (int *a, int *b) {
	int c;
	c = *a;
	*a  = *b;
	*b = c;
}

void swap2 (int &a, int &b) {
	int c;
	c = a;
	a = b;
	b = c;
}

void fonction1(int a)
{
  std::cout << &a << std::endl;
}

void fonction2(int& a)
{
  std::cout << &a << std::endl;
}

int main(int, char **)
{
  int a = 2 ;
  int b = 3;

	Point p1 ;
	
	Point p2 (5,5);
	
	Point * p3 = new Point() ;
	Point * p4 = new Point(1,2);

	// CE QUI SUIT = DE LA MERDE : car .x EST PRIVE !!
	// std::cout << p1.x << " " << p2.x << std::endl;
	
	std::cout << p1.getX() << " " << p1.getY() << std::endl;
	
	std::cout << p2.getX() << " " << p2.getY() << std::endl;
	
	std::cout << p3->getX() << " " << p3->getY() << std::endl;
	
	std::cout << p4->getX() << " " << p4->getY() << std::endl;
	
	cout << Point::getCompteur() << endl;
	
  return 0;
}
