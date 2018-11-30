#include <algorithm>
#include <stack>
#include <vector>
#include <iostream>
#include <iterator>

using namespace std;

int main(int, char **) {
  std::stack<int> is;
  std::stack<double, std::vector<double> > ds;

  for (int i = 0; i < 100; ++i)
    is.push(i);

    cout << is.size() << endl << endl; // affiche 100 (la taille réelle de la pile)


     std::cout << is.top() << std::endl; // affiche 99
     ds.push((double)is.top()*is.top()); // insert 99.0 * 99.0 = 9 801.0
     std::cout << ds.top() << std::endl; // affiche 9801.0
     is.pop(); // supprimme 99
     std::cout << is.top() << std::endl; // affiche 98
  

  return 0;
}