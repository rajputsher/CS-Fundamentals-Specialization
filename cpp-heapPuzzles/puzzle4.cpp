/**
 * C++ puzzle program.  Try to figure out the result before running!
 * 
 * @author
 *   Wade Fagen-Ulmschneider <waf@illinois.edu>
 */

#include <iostream>

using std::cout;
using std::endl;
/*
int main() {
  int *x;
  int size = 3;
  x = new int[size];

  for (int i = 0; i < size; i++) {
    x[i] = i + 3;
  }

  delete[] x;
}
*/
/*
int main() {
int i = 0, j = 1;
cout << i << endl;
int *ptr = &i;
 cout << i << endl;

i = 2;
cout << i << endl;
*ptr = 3;
cout << i << endl;
ptr = &j;
cout << i << endl;
j = i;
cout << i << endl;
*ptr = 4;
cout << i << endl;
}
*/
int main() {
int *i = new int;
cout << i << endl;
*i = 0;
cout << i << endl;
int &j = *i;
cout <<"j="<< j << endl;
cout <<"i="<< i << endl;
j++;
cout <<"j++="<< j << endl;
}