// Problem link - https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J

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
    cin >> length;

    int arr[length], count = 0;
    for(int i = 0; i < length; i++){
        cin >> arr[i];
    }
    int minimum = arr[0];
    for(int i = 1; i < length; i++){
        if(arr[i] < minimum) minimum = arr[i];
    }

    for(int i = 0; i < length; i++){
        if(arr[i] == minimum) count++;
    }

    if(count %2 != 0) cout << "Lucky" << nl;
    else cout << "Unlucky" << nl;

    return 0;
}