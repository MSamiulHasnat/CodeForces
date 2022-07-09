#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cmath>

#define nl '\n'
#define ll long long
#define dbl double
#define flt float
#define gl getline //(cin>>ws,s);


using namespace std;

int main(){
//this 4 lines are for gets and puts for input and output .text files
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 





// My Code Starts Her

    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    long dbl x = b * log10(a), y = d * log10(c);
    if(x > y) cout << "YES";
    else cout << "NO";
    
    return 0;
}