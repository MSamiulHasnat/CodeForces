// Problem link - https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cmath>
#include <algorithm>

#define nl '\n'

using namespace std;
int pal = 0;
void palindrom(int num[], int tc){
    bool palindrome = false;
    for(int i = 0; i <= tc / 2; i++){
        if(num[i] != num[tc - i - 1]) pal++;
    }
    if(pal != 0) cout << "NO";
    else cout << "YES";
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
    int tc;
    cin >> tc;
    int num[tc];
    
    for(int i = 0; i < tc; i++){
        cin >> num[i];
    }
    palindrom(num, tc);
    
    return 0;
}