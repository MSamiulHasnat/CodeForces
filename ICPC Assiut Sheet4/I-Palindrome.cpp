// Problem link - https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

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
    string str;
    cin >> str;

    string realStr = str;

    reverse(str.begin(), str.end());

    if(str == realStr){
        cout << "YES" << nl;
    }
    else cout << "NO" << nl;

    return 0;
}