// Problem link - https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

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
    int length;
    long long sum = 0;
    cin >> length;

    int arr[length];
    for(int i = 0; i < length; i++){
        cin >> arr[i];
        sum += arr[i];
    }

    cout << abs(sum);
    
    return 0;
}