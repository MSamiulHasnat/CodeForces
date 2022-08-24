// Problem link - https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/K

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
    int arrSize, sum = 0;
    cin >> arrSize;

    string arr;
    cin >> arr;

    for(int i = 0; i < arrSize; i++){
        sum = sum + ((int)arr[i] - 48);
    }
    cout << sum;

    return 0;
}