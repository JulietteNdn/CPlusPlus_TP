#include <algorithm>
#include <vector>
#include <iostream>
#include <iterator>

using namespace std;

int main (int, char **) {
  std::vector<int> v;
  
  int input;

  while (std::cin >> input)
    v.push_back(input);

  std::sort(v.begin(), v.end());

  std::vector<int> vCop(v.size());

  std::copy (v.begin(), v.end(), vCop.begin());

/* affichage for classique */
	for (int i=0; i<v.size(); i++){
  	cout << vCop[i] << " " ;
	}
  cout << endl;

/* affichage autre façon */
  for ( int& element : v){
    cout << element << " ";
  }

  return 0;
}
