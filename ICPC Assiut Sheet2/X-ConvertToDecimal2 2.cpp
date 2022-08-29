// Problem link - https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/X

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cmath>
#include <algorithm>

#define nl '\n'

using namespace std;

string toBinary(int n)
{
    string r;
    while(n != 0) {
        r = (n % 2 ==0  ? "0" : "1") + r;
        n /= 2;
    }
    return r;
}

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

    while (testcase--)
    {
        int number;
        cin >> number;

        string binary = toBinary(number);
        int count = 0;
        for(int i = 0; i < binary.size(); i++){
            if(binary[i] == '1') count++;
        }

        string newBinary;
        for(int i = 0; i < count; i++){
            newBinary.push_back('1');
        }
        cout << stoi(newBinary, 0, 2) << nl;
    }
    return 0;
}