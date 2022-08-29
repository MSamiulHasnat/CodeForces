// Problem link - https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Y

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

    for(int i = 0; i < number; i++){
        if(i == 0){
            cout << "0 ";
            continue;
        }
        if(i == 1){
            cout << "1 ";
            continue;
        }
        nextPosition = position1 + position2;
        position1 = position2;
        position2 = nextPosition;

        cout << nextPosition << ' ';
    }
    return 0;
}