#include<bits/stdc++.h>
#include<string.h>
using namespace std;
 
int main() {
    int a;
    cin >> a;
    
    int res = a/1000;
    
    if(res&1) cout << "ODD";
    else cout << "EVEN";
    
    return 0;
}