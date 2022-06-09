#include <iostream>
#include <cmath>

using namespace std;

int main(){
//this 4 lines are for gets and puts for input and output .text files
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
// My Code Starts Here
 
    string firstName, secName, firstName2, secName2;
    cin >> firstName >> secName;
    cin >> firstName2 >> secName2;

    if(secName2==secName){
        cout << "ARE Brothers\n";
    }
    else cout << "NOT" << '\n';
    

    return 0;
}