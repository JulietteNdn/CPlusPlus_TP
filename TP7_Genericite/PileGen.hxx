#ifndef PILEGEN_HXX
#define PILEGEN_HXX

#include <iostream>
#include <stdlib.h>
#include <stdexcept>


using namespace std;

template <typename TYPE>
class PileGen {
	public :
		PileGen();
		PileGen(int);
		PileGen(const PileGen &);
		
		~PileGen();
		
		PileGen& operator=(const PileGen &);
		
		int size();
		TYPE * getTab_();
		
		bool empty() const;
		void push(const TYPE&);
		TYPE pop();
		const TYPE& top() const;
	
	private :
		int taille_ ;
		int indiceFin_; // pointe sur le dernier élément +1
		TYPE * tab_;
	
};

#include "PileGen.cxx"


#endif
