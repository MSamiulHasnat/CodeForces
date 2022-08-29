#include <iostream>
using namespace std;

int main()
{
  int n;
  cin >> n;

  int num = 1;

  for (int i = 1; i <= n; i++)
  {
    cout << num << ' ' << num + 1 << ' ' << num + 2 << ' ' << "PUM" << '\n';
    num += 4;
  }

  return 0;
}