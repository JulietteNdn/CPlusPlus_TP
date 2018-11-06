#include "A.hpp"
#include "B.hpp"

A::A(int k): i(k) {}

void A::exec(int i) 
{
	this->i += i ;
}

void A::send(B* unB)
{
	unB->exec(17);
}
