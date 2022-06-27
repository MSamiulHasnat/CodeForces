
#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >>n;
    for(int i=1; i<=n; i++){
        int c, d;
        cin >> c >> d;
        
        int a = min(c,d);
        int b = max(c,d);
        m=0;
        for(int i=a+1; i<b; i++){
            if(i&1==1){
                m+=i;
            }
        }
        cout << m << '\n';
    }
    return 0;
}
