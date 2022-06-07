#include <iostream>
#include<iomanip>

using namespace std;

int main(){
//this 4 lines are for gets and puts for input and output .text files
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
// My Code Starts Here
    cout << fixed << setprecision(9);

    double R, n = 3.141592653;
    cin >> R;
    
    cout << n * R * R;

    return 0;
}