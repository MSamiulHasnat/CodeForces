#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cmath>
#include <algorithm>

#define nl '\n'

using namespace std;

int checkCondition(int num){
    int sum = 0;
    while(num != 0){
        sum = sum + num % 10;
        num = num / 10;
    }
    return sum;
}
int main(){
    int n, a, b, x = 0;
    cin >> n >> a >> b;

    for(int i = 1; i <= n; i++){
        int sum = 0;
        sum = checkCondition(i);
        if(sum >= a && sum <= b) x += i;
    }
    cout << x << nl;
    return 0;
}