// Problem link - https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/D

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
        string str1, str2;
    cin >> str1 >> str2;

    int sizestr1 = str1.size();
    int sizestr2 = str2.size();

    cout << sizestr1 << " " << sizestr2 << nl;
    cout << str1 << str2;

    char ch1 = str1[0];
    cout << ch1;
    
    
    return 0;
}