// Problem link - https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/N

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
    int A, B;
    cin >> A >> B;

    int x = (A + B + 1);
    char arr[x];
    for(int i = 0; i < x; i++){
        cin >> arr[i];
    } //- dec 45

    int flag = 0;
    for(int i = 0; i < x; i++){
        if(arr[i] == '-') flag = i;
    }
    if(flag == A) cout << "Yes";
    else cout << "No";

    return 0;
}