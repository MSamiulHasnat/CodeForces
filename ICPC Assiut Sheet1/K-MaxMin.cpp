#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    cout << min(min(a,b),c) << " " << max(c, max(a, b)) << '\n';
    

    return 0;
}