// Problem link - 

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cmath>
#include <algorithm>

#define nl '\n'

using namespace std;

int main(){
{
//this 4 lines are for input and output .text files
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
}
// My Code Starts Here         
    int testcase;
    cin >> testcase;

    while(testcase--){
        string str;
        cin >> str;
        int length = str.size();
        if(length > 10){
            cout << str[0] << length-2 << str[length-1] << nl;
        }
        else cout << str << nl;
    }

    return 0;
}