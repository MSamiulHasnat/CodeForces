// Problem - https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q

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
    
    int num, n, reversed_number = 0, remainder;
    cin >> num;

    for(int i = 0; i < num; i++){
        cin >> n;

        if(n == 0) cout << n;
        else {
            while(n != 0) {
                remainder = n % 10;
                cout << remainder << " ";
                reversed_number = reversed_number * 10 + remainder;
                n /= 10;
            }
        }
        cout << nl;

    }

    return 0;
}