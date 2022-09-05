// Problem link - https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/P

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

    int arr[length];
    for(int i = 0; i < length; i++){
        cin >> arr[i];
    }

    int count = 0;
    while(1){
        int flag = 0;
        for(int i = 0; i < length; i++){
            if(arr[i] % 2 == 0){
                arr[i] = arr[i] / 2;
            }
            else{
                flag = 1;
                break;
            }
        }
        count++;
        if(flag ==1) break;
    }
    cout << count - 1;
    
    return 0;
}