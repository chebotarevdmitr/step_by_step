#include <iostream>

int main() {
    bool A = true;
    bool B = false;

    std::cout << "A && B = " << (A && B) << std::endl; // Ожидаемый результат: 0
    std::cout << "A || B = " << (A || B) << std::endl; // Ожидаемый результат: 1
    std::cout << "!A = " << (!A) << std::endl;         // Ожидаемый результат: 0
    std::cout << "!B = " << (!B) << std::endl;         // Ожидаемый результат: 1

    int i, j;
    bool b1, b2;
    i = 10;
    j = 11;
    if(i<j)
      std::cout << "\ti<j"<<std::endl;
    if(i<=j)
       std::cout << "\ti<=j" << std::endl;
    if(i!=j)
       std::cout << " i!=j" << std::endl;
    if(i==j)
       std::cout << "this will not be executed" << std::endl;
    if(i>=j)
       std::cout << "this will not be executed" << std::endl;
    if(i>j)
       std::cout << "this will not be executed" << std::endl;

   b1 = true;
   b2 = false;
   if(b1&&b2)
      std::cout << "this will not be executed" << std::endl;
   if(!(b1&&b2))
      std::cout << " !=b1&&b2 There is a truth " << std::endl;
   if(b1||b2)
      std::cout << " b1 || b2  There is a truth " << std::endl;
   return 0;
}
