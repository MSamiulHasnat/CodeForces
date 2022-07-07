#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int w = a % 100;
    int x = b % 100;
    int y = c % 100;
    int z = d % 100;
    int sum = (w * x * y * z) % 100;
    
    if(sum <= 9) cout << "0" << sum;
    else cout << sum;

    return 0;
}