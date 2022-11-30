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
    string str;
    getline(cin, str);

    int length = str.size();
    for(int i = 0; i < length; i++){
        if((int)str[i] != 92) {
            cout << str[i];
        }
        else break;
    }

    return 0;
}