#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n, i, even=0, odd=0, posittive=0, negetive=0;
    cin >> n;
    int numb[n];
    
    for(i=0; i<n; i++) cin >> numb[i];
    for(i=0; i<n; i++){
        if(numb[i]%2==0) even++;
        if(numb[i]&1) odd++;
        if(numb[i]>0) posittive++;
        if(numb[i]<0) negetive++;
    }
    
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << posittive << endl;
    cout << "Negative: " << negetive << endl;
    
    return 0;
}
