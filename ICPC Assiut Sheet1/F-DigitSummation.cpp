#include <iostream>

using namespace std;

int main()    
{
    long long int num1, num2;
    
    cin >> num1 >> num2;
    int fdig = num1%10;
    int sdig = num2%10;
    
    int sum = fdig + sdig;
    std::cout << sum << std::endl;
    
    return 0;
}