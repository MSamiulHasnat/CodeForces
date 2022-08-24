// Problem link - https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E

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
    string number;
    cin >> number;

    int length = number.size();
    int sum = 0;

    for(int i = 0; i < length; i++){
        sum = sum + (int)number[i] - 48;
    }
    cout << sum; 

    return 0;
}