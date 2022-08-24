// Problem link - 

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cmath>
#include <algorithm>

#define nl '\n'

using namespace std;

int main(){
{
//this 4 lines are for input and output .text files
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif 
}
// My Code Starts Here         
    int acount = 0, bcount = 0, ccount = 0, dcount = 0, ecount = 0, dcount = 0, ecount = 0, fcount = 0, gcount = 0, hcount = 0, icount = 0, jcount = 0, kcount = 0, lcount = 0, mcount = 0, ncount = 0, ocount = 0, pcount = 0, qcount = 0, rcount = 0, scount = 0, tcount = 0, ucount = 0, vcount = 0, wcount = 0, xcount = 0, ycount = 0, zcount = 0;

    string str;
    cin >> str;

    int length = str.size();
    for(int i = 0; i < length; i++){
        char x = str[i];
        if(x == 'a') acount++;
        else if(x == 'b') bcount++;
        else if(x == 'c') ccount++;
        else if(x == 'd') dcount++;
        else if(x == 'e') ecount++;
        else if(x == 'f') fcount++;
        else if(x == 'g') gcount++;
        else if(x == 'h') hcount++;
        else if(x == 'i') icount++;
        else if(x == 'j') jcount++;
        else if(x == 'k') kcount++;
        else if(x == 'l') lcount++;
        else if(x == 'm') mcount++;
        else if(x == 'n') ncount++;
        else if(x == 'o') ocount++;
        else if(x == 'p') pcount++;
        else if(x == 'q') qcount++;
        else if(x == 'r') rcount++;
        else if(x == 's') scount++;
        else if(x == 't') tcount++;
        else if(x == 'u') ucount++;
        else if(x == 'v') vcount++;
        else if(x == 'w') wcount++;
        else if(x == 'x') xcount++;
        else if(x == 'y') ycount++;
        else if(x == 'z') zcount++;
    }

    if(acount > 0) cout << "a : " << acount << nl;
    if(bcount > 0) cout << "b : " << bcount << nl;
    if(ccount > 0) cout << "c : " << ccount << nl;
    if(dcount > 0) cout << "d : " << dcount << nl;
    if(ecount > 0) cout << "e : " << ecount << nl;
    if(fcount > 0) cout << "f : " << fcount << nl;
    if(gcount > 0) cout << "g : " << gcount << nl;
    if(hcount > 0) cout << "h : " << hcount << nl;
    if(icount > 0) cout << "i : " << icount << nl;
    if(jcount > 0) cout << "j : " << jcount << nl;
    if(kcount > 0) cout << "k : " << kcount << nl;
    if(lcount > 0) cout << "l : " << lcount << nl;
    if(mcount > 0) cout << "m : " << mcount << nl;
    if(ncount > 0) cout << "n : " << ncount << nl;
    if(ocount > 0) cout << "o : " << ocount << nl;
    if(pcount > 0) cout << "p : " << pcount << nl;
    if(qcount > 0) cout << "q : " << qcount << nl;
    if(rcount > 0) cout << "r : " << rcount << nl;
    if(scount > 0) cout << "s : " << scount << nl;
    if(tcount > 0) cout << "t : " << tcount << nl;
    if(ucount > 0) cout << "u : " << ucount << nl;
    if(vcount > 0) cout << "v : " << vcount << nl;
    if(wcount > 0) cout << "w : " << wcount << nl;
    if(xcount > 0) cout << "x : " << xcount << nl;
    if(ycount > 0) cout << "y : " << ycount << nl;
    if(zcount > 0) cout << "z : " << zcount << nl;

    return 0;
}