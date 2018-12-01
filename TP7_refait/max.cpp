#include <iostream>
#include <stdexcept>

using namespace std;


template <typename T>
const T& maxi(const T& a, const T & b){
	return ((a>b)? a : b);
}



int main(int, char**){
	
	cout << maxi(4,7) << endl;
	
	cout << maxi(3.0,1.0) << endl;
	
	return 0;
}
