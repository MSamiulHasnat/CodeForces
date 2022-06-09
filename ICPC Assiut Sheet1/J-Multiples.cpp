#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    
    if (a%b==0 || a%b==0 || b%a==0 || b%a==0) std::cout << "Multiples\n" << std::endl;
    else cout << "No Multiples\n";

    return 0;
}