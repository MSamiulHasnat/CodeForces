// Problem link - https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/F

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
    int num[tc];
    
    for(int i = 0; i < tc; i++){
        cin >> num[i];
    }
    for(int i = tc-1; i >= 0; i--){
        cout << num[i] << ' ';
    }
    
    return 0;
}