// Problem link - https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I

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
    int testcase, result = 0; //1
    cin >> testcase;

    while(testcase--){ //1
        int size; //2
        cin >> size;

        int arr[size]; //arr[2]
        for(int i = 0; i < size; i++){
            cin >> arr[i]; // 0 1
        }
        long long min = 1e17;
        for(int z = 1; z <= size; z++){ //1 2
            for(int x = z + 1; x <= size; x++){ //2 3 4
                // (1,2) (1,3) (1,4)
                // (2,3) (2,4)
                // (3,4)
                result = arr[z - 1] + arr[x - 1] + x - z;

                if(min > result) min = result;
            }
        }
        cout << min;
    }
    return 0;
}