#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

class M {
 public:
	M() {
		std::cout << "M::M()" << std::endl;
	}
   ~M() {
		std::cout << "M::~M()" << std::endl;
  }
    M(const M&) {
		std::cout << "M::M(const M&)" << std::endl;
  }


	M & operator = (const M&){
		std::cout << "M::operator=()" << endl;
		return *this;
	} 

};



class A {
 public:
	A() {
		std::cout << "A::A()" << std::endl;
	}
   ~A() {
		std::cout << "A::~A()" << std::endl;
  }
    A(const A& a) : mere_(a.mere_) {
		std::cout << "A::A(const A&)" << std::endl;
  }

	A & operator = (const A& a) {
		std::cout << "A::operator=()" << endl;
	} 
	
	
	private:
		M mere_;

};



class F : public M {
 public:
	F() {
		std::cout << "F::F()" << std::endl;
  }
	~F() {		
		std::cout << "F::~F()" << std::endl;
  }
  
  F(const F& f) : M(f){
    std::cout << "F::F(const F&)" << std::endl;
  }
  
	F & operator = (const F& fille){
		M::operator=(fille);
		std::cout << "F::operator=()" << endl;
		return *this;
	} 
  
};

int main(int, char**) {
	/*
  F f1;
  F f2 = f1;

  f1 = f2;
	*/
  A a1 ;
  A a2 = a1;

  return 0;
}
