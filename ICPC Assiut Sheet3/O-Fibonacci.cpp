// Problem link - https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/O

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
    int number;
    cin >> number;

    int position1 = 0, position2 = 1, nextPosition;
    long long arr[number+1];
    
    for(int i = 0; i < number; i++){
        if(i == 0){
            arr[0] = 0;
            continue;
        }
        if(i == 1){
            arr[1] = 1;
            continue;
        }
        if(i > 1 && i < number){
            arr[i] = arr[i - 1] + arr[i - 2];
        }
    }
    cout << arr[number-1];

    return 0;
}