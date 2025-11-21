#include <iostream>
#include <Windows.h>
#include <vector>
using namespace std;

vector<int> container(10, -1);

int fibonachi(int n, vector<int> &container)
{
  if (n <= 1)
  {
    return n;
  };
  if (container[n] != -1)
  {
    return container[n];
  };
  container[n] = fibonachi(n - 1, container) + fibonachi(n - 2, container);
  return container[n];
};

int main()
{
  SetConsoleOutputCP(CP_UTF8);
  int number = 0;
  cout << "Вводим число: ";
  cin >> number;
  cout << fibonachi(number, container) << endl;
  return 0;
}