// problem link - https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/N



#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cmath>
#include <algorithm>

#define nl '\n'
#define gl getline //(cin>>ws,s);

using namespace std;



int main(){
//this 4 lines are for input and output .text files
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 



// My Code Starts Here         
    
    int a, n; char symbol;
    cin >> symbol >> n;

    for(int i = 0; i < n; i++){
        cin >> a;
        for(int i = 0; i < a; i++){
            cout << symbol;
        }
        cout << nl;
    }

    return 0;
}