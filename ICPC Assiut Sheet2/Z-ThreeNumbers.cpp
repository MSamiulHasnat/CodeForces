// Problem link - https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Z

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
    int k, s, count = 0;
    cin >> k >> s;

    for(int x = 0; x <= k; x++){
        for(int y = 0; y <= k; y++){
            int z = s - x - y;
            if(z >= 0 && z <= k) count++;
        }
    }
    cout << count;
    return 0;
}
