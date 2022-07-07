#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
    double x;
    cin >> x;
    
    int y = x;
    
    if(x == y) cout << "int " << y;
    else cout << "float " << y << " " << x - y;
    
    return 0;
}