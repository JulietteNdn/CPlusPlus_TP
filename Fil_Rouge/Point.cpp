#include "Point.hpp"

Point::Point(): x_(0), y_(0){
}

Point::Point(int x, int y): x_(x), y_(y){

}


int Point::getX(){
	return x_;	
}

int Point::getY(){
	return y_;	
}

void Point::setX(int x){
	x_ = x;
}

void Point::setY(int y){
	y_ = y ;
}
	
