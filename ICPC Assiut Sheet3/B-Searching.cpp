// Problem link - https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

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
    int elements, flag = 0;
    cin >> elements;

    int num[elements];
    for(int i = 0; i < elements; i++){
        cin >> num[i];
    }
    int check;
    cin >> check;

    for(int i = 0; i < elements; i++){
        if(num[i] == check){
            cout << i;
            flag = 1;
            break;
        }
    }

    if(!flag) cout << "-1";
    
    return 0;
}