#ifndef PILE_HPP
#define PILE_HPP

#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <cstring>
#include <stdexcept>

using namespace std;


class Pile {
	public :
		Pile();
		Pile(int);
		Pile(const Pile &);
		
		~Pile();
		
		Pile& operator=(const Pile &);
		
		int size();
		int * getTab_();
		
		bool empty() const;
		void push(const int&);
		int pop();
		const int& top() const;
	
	private :
		int taille_ ;
		int indiceFin_; // pointe sur le dernier élément +1
		int * tab_;
	
};



#endif
