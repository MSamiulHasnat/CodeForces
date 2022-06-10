#include <iostream>

using namespace std;

int main()
{
    
    int age;
    cin >> age;
    
    cout << (int)age/365 << " years\n";
    int month = age%365;
    cout << month/30 << " months\n";
    int days = month%30;
    cout << days << " days\n";

    return 0;
}