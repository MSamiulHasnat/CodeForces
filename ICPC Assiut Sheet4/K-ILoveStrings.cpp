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
    int testcase;
    cin >> testcase;

    while(testcase--){
        string str1, str2, newstr;
        cin >> str1 >> str2;

        int length =  str1.size() + str2.size();
        bool flag1 = true, flag2 = true;

        for(int i = 0; i < length; i++){
            if(str1.size() != i && flag1) cout << str1[i];
            else flag1 = false;

            if(str2.size() != i && flag2) cout << str2[i];
            else flag2 = false;
        }
        cout << nl;
    }

    return 0;
}