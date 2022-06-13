#include <iostream>
#include <cmath>
using namespace std;

void fact(int p){
    long long int n, m=1;
        for(n=1; n<=p; n++){
        m=m*n;
    }
    cout << m <<'\n';
}

int main(){

    long long int n, p;
    cin >> n;

    for(int i=1; i<=n; i++){
        cin >> p;
        fact(p);
    }
    return 0;
}