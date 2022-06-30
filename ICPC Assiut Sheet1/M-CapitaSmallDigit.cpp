#include<bits/stdc++.h>
#include<string.h>
using namespace std;

int main() {
    char b;
    cin >> b;
    
    int a = b;
    
    if(a > 64 && a < 91) cout << "ALPHA\nIS CAPITAL";
    else if(a > 96 && a < 123) cout << "ALPHA\nIS SMALL";
    else if(a > 47 && a < 58) cout << "IS DIGIT";
    return 0;
}