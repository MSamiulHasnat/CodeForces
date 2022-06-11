#include <iostream>

using namespace std;

int main()    //60<; 61=; 62>;
{
    int a, b;
    char p;
    
    cin >> a >> p >> b;
    
    if(p==60) {
        if(a<b) cout << "Right";
        else cout << "Wrong";
    }
    else if(p==61){
        if(a==b) cout << "Right";
        else cout << "Wrong";
    }
    else if(p==62) {
        if(a>b) cout << "Right";
        else cout << "Wrong";
    }
    
    return 0;
}