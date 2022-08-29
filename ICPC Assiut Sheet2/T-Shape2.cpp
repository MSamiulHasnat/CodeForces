// Problem link - 

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cmath>
#include <algorithm>

#define nl '\n'

using namespace std;

int main(){
//this 4 lines are for input and output .text files
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 

// My Code Starts Here         

    int n; cin >> n;
    for (int line = 1; line <= n; line++) {
        int spaces = n - line;
        int stars = 2 * line - 1;
        for (int i = 1; i <= spaces; i++) {
        cout << ' ';
        }    
        for (int i = 1; i <= stars; i++) {
        cout << '*';
        }
        cout << '\n';
    }

    
    return 0;
}