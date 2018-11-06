#include "B.hpp"
#include "A.hpp"

B::B(int k): j(k) {}

void B::exec(int j) 
{
	this->j += j ;
}

void B::send(A* unA)
{
	unA->exec(1996);
}
