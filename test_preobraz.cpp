# include <iostream>
using namespace std;
 int main(int argc, const char** argv) {
    int x;
    for (int i = 1; i <= 10; i++) {
      cout<<i<<"/2 ravno: " <<(float)i/2<<endl;//приведение к типу float для получения дробного числа
    }
    return 0;
}
