// step 3
//tip    bool   true =1 (istina) false =0(loj)
#include <iostream>
using namespace std;

int main()
{
    cout << "\t demonstraciya bulevih znacheniy " << endl;
    bool b;
    b = false;
    cout << "bool b false = " << b << "\n";
    b = true;
    cout << "bool b true = " << b << "\n";
    // bulevo znachenie mojet upravlyat predlojeniem "if"
    if (b)cout << "eto  vipolnyaensya.\n";
    b = false;
    cout << "eto ne vipolnyaensya .\n";
    //rezultatom deistviya budet znachenie true/false
    cout << "10>9 esto = " << (10 < 9) << "\n";
    system("pause>0");
}