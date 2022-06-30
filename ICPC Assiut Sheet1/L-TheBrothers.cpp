#include <iostream>
#include <cmath>

using namespace std;

int main(){
    string firstName, secName, firstName2, secName2;
    cin >> firstName >> secName;
    cin >> firstName2 >> secName2;

    if(secName2==secName){
        cout << "ARE Brothers\n";
    }
    else cout << "NOT" << '\n';
    

    return 0;
}
