// step 2 
//tip s plavaushey nochkoy  -> float -> double 
//ispolzovanie teoremi Pifagora dlya nahojdeniya dlinny gipotenuzy
//pryamougolnogo treugolnika pri zadannyh dlinnah ego katetah

/* 
  Теорема Пифагора - это фундаментальная теорема в геометрии, которая гласит, 
  что в прямоугольном треугольнике квадрат гипотенузы равен сумме квадратов катетов.
*/

#include <iostream>
#include <cmath>

using namespace std;
int main()
{
    double x, y, z;
    x = 5.0;
    y = 4.0;
    z = sqrt(x * x + y * y);
    cout << "Gipotenuza =" << z;

    system("pause>0");
}