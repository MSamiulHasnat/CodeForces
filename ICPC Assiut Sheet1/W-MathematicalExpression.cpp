#include <iostream>

using namespace std;

int main()    //42* //43+ //45-
{
    int num1, num2, num3;
    char sign1, sign2;
    
    cin >> num1 >>sign1 >> num2 >> sign2 >> num3;
    
    if(sign1==42) {
        if(num3==num1*num2) cout << "Yes";
        else cout << num1*num2;
    }
    else if(sign1==43){
        if(num3==num1+num2) cout << "Yes";
        else cout << num1+num2;
    }
    else if(sign1==45){
        if(num3==num1-num2) cout << "Yes";
        else cout << num1-num2;
    }
    
    return 0;
}