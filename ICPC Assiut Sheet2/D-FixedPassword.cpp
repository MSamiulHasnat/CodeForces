#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int pass;
    
    while(1){
        cin >> pass;
        if(pass==1999) {
            cout << "Correct";
            break;
        }
        else cout << "Wrong\n";
    }

    return 0;
}
