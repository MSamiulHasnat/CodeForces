// Problem link - https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C

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
    int tc;
    cin >> tc;
    int num[tc+1];

    for(int i = 0; i < tc; i++){
        cin >> num[i];
        if(num[i] < 0) cout << 2 << ' ';
        else if(num[i] == 0) cout << 0 << ' ';
        else cout << 1 << ' ';
    }
    
    return 0;
}