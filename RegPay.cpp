#include <iostream>
#include <cmath>

//using namespace std;

int main() {

  double principal = 0;     // начальная сумма ссуды
  double int_rate  = 0;     // ставка проценеа по ссуде например 0.075
  double pay_per_year = 0;  // число платежей в год
  double num_years = 0;     // количество лет ,на кокорые выдана ссуда
  double pay_ment = 0;      // регулярный платёж
  double number, denom;     // временные рабочие переменные
  double b, e; // основание и порядок для вызова функции pow()

  std::cout << "Enter principal summa sudi = ";
  std::cin >> principal;

  std::cout << "Enter int_rete procentnaya stavka (naprimer 0.075) = ";
  std::cin >> int_rate ;

  std::cout << "Enter pay_par_year chislo platejey v god = ";
  std::cin >> pay_per_year ;

  std::cout << "Enter num_years kolichtstvo let = ";
  std::cin >> num_years;
  number = int_rate * principal / pay_per_year;

  e = -(pay_per_year * num_years);
  b = (int_rate / pay_per_year) + 1;

  denom = 1 - pow(b, e);
  pay_ment = number / denom;

  std::cout << "platej sostavit  " << pay_ment << std::endl;

  return 0;
}    