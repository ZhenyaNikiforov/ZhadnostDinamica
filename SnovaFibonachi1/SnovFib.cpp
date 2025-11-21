#include <iostream>
#include <Windows.h>
#include <vector>
using namespace std;

/*--
Подпрограмма нахождения чисел Фибоначчи, представленная ниже,
обладает временной асимптотикой O(2^n), поскольку численность
новых подпрограмм возрастает в экспоненциальной зависимости (2^x);

асимптотика памяти составляет O(n), поскольку кол-во чисел пропорционально
кол-ву подпрограмм.
--*/

int numsFib(int n) // Рекурсивная функция для нахождения произвольного числа Фибоначчи
{
  if (n <= 1) // Условие прерывания рекурсии
  {
    return n;
  };
  return numsFib(n - 1) + numsFib(n - 2); // сама рекурсия
};

int main()
{
  SetConsoleOutputCP(CP_UTF8);

  int number = 0;
  cout << "Вводим число: ";
  cin >> number;
  cout << numsFib(number) << endl;

  return 0;
}