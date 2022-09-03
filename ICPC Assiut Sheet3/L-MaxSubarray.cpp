// Problem link - https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/L

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
        int length;
        cin >> length;

        int arr[length];
        for(int i = 0; i < length; i++){
            cin >> arr[i];
        }
        for(int i = 0; i < length; i++){
            for(int j = i; j < length; j++){
                int mx = arr[i];
                for(int k = i; k <= j; k++){
                    if(arr[k] > mx) mx = arr[k];
                }
                cout << mx << " ";
            }
        }
        cout << nl;
    }

    return 0;
}