#include <iostream>
#include <cmath>
using namespace std;

int main() {
  bool p, q;
  p = true;
  q = true;
  cout << p << " XOR " << q << " ravno " << ((p || q) && !(p && q)) << "\n";

  p = false;
  q = true;
  cout << p << " XOR " << q << " ravno " << ((p || q) && !(p && q)) << "\n";

   p = true;
   q = false;
   cout << p << " XOR " << q << " ravno " << ((p || q) && !(p && q)) << "\n"; 

   p = false;
   q = false;
   cout << p << " XOR " << q << " ravno " << ((p || q) && !(p && q)) << "\n";

   cout << "\ta=true c=false"<<"\n";
   bool a = true;
   bool c = false;

   cout << "a = " << a << endl; // выводит: a = 1
   cout << "b = " << c << endl; // выводит: b = 0

   return 0;
}