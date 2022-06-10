#include <iostream>

using namespace std;

int main()
{
    char a;
    cin >> a; //z=90
    int x = a;
    
    if(x<91){
        std::cout << (char)(x+32) << std::endl;
    }
    else cout << (char)(x-32);
    

    return 0;
}