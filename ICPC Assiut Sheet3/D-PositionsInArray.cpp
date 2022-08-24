// Problem link - https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D

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
    int tc, pos = 0;
    cin >> tc;
    int num[tc+1];

    for(int i = 0; i < tc; i++){
        cin >> num[i];
    }
    int small = num[0];
    for(int i = 0; i < tc; i++){
        if(small > num[i]){
            small = num[i];
        }
    pos++;
    }
    cout << small << ' ';
    for(int i = 0; i < tc; i++){
        if(small == num[i]) {
            cout << i+1; 
            break;
        }
    }
    return 0;
}