// step_1
#include <iostream>
using namespace std;
int main()
{
    // демонстрация различия между целыми числами 
    // со знаком и бес знака
    short int i;            // короткое целое со знаком
    short unsigned int j;  // короткое целое без знака

    j = 60000;  //60000 находится в допустимом значении для unsignet short int но как правило будет
    i = j;     //вне допустимого диапазон длч числа signed short int в результате присваивания его
              //переменной i оно будет интропретироваться как отрицательное число

     cout << i << " " << j << endl; //вывод в консоль -5536 60000
  
     char ch;
     ch = 'X'; //  символьной переменной char присвоили значение " X "
     cout << " \t This is char ch = " << ch << endl; //Вывод :  This is char ch = Х

     cout << "\tThe program outputs the Latin alphabet" << endl;
     cout << "\n";
     char letter;
     for (letter = 'A'; letter <= 'Z'; letter++)    //переменная типа char для 
         cout <<     letter << " ";                 //управления циклом for

    system("pause>0");
}