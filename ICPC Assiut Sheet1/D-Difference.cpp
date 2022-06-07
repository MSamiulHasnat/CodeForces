#include <iostream>
using namespace std;

int main(){
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif


    int a, b, c, d;
    cin >> a >> b >> c >>d;
    long long int x = (long long int)a * b - (long long int)c * d;
    cout << "Difference = " << x ;

    return 0;
}