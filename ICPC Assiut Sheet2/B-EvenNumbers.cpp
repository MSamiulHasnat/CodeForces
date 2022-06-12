#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n, i;
    cin >> n;
    
    for(i=0; i<=n; i+=2){
        if(i==0) continue;
        std::cout << i << std::endl;
    }
    if(n==1) cout << "-1";
    
    return 0;
}

