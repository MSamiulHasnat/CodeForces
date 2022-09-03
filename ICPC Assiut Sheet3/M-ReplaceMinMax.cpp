// Problem link - https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/M

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
    cin>> length;

    int arr[length];
    for(int i = 0; i < length; i++){
        cin >> arr[i];
    }
    int mn = 0, mx =0;
    for(int i = 0; i < length; i++){
        if(arr[i] <= arr[mn]) mn = i;
        if(arr[i] >= arr[mx]) mx = i;
    }
    int temp = mn;
    mn = mx;
    mx = temp;
    swap(arr[mx], arr[mn]);
    for(int i = 0; i < length; i++){
        cout << arr[i] << ' ';
    }
    return 0;
}