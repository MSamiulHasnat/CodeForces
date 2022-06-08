#include <iostream>

using namespace std;

int main(){

 
    long long int n, i, sum = 0;

    cin >> n;

    sum = n*(n+1)/2;
    cout << sum << '\n';
    

    return 0;
}
// n (1<=n<=10^9)
//it was with time limit and thats why we can't use loop to do it