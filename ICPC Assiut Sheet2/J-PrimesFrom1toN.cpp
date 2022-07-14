// Problem link - https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cmath>
#include <algorithm>

#define nl '\n'
#define gl getline //(cin>>ws,s);


using namespace std;

int main(){
    
    int n, x, i, count = 0, a=0;
    cin >> n;

    for(x = 2; x <= n; x++){
        count = 0;
        for(i = 2; i <= x; i++){
            if(x % i == 0) count++;
        }
        if(count == 1) cout << x << " ";
    }

    return 0;
}