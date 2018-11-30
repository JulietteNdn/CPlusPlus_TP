#ifndef PILEGEN_HPP
#define PILEGEN_HPP

#include <iostream>


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
