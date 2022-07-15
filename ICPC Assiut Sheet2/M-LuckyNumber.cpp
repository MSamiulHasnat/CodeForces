//Problem link - https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M


#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cmath>
#include <algorithm>

#define nl '\n'
#define gl getline //(cin>>ws,s);

using namespace std;


bool isLucky(int num){
    while(num > 0){
        int digit = num % 10;
        if(digit == 4 || digit == 7){}
        else return false;
        num /= 10;
    }
    return true;
}

int main(){
//this 4 lines are for input and output .text files
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 



// My Code Starts Here         
    
    int n1, n2, num, count = 0;
    cin >> n1 >> n2;
    bool found = false;

    for(int i = n1; i <= n2; i++){
        if(isLucky(i)){
            cout << i << " ";
            found = true;
        }
    }
    if(!found) cout << -1;

    return 0;
}