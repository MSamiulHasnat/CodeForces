// Problem link - 

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

    cout << str1.size() << " " << str2.size() << nl << str1 << " " << str2;

    return 0;
}