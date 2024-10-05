//
// Created by Ashish Shankar on 22/09/24.
//

#include <iostream>
#include <string>
using namespace std;


// ----------------------------------------------------------------------


void solve( ) {

}


// ----------------------------------------------------------------------

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" ,  stdin);
    freopen("output.txt" , "w" , stdout);
#endif


    string s ; cin >> s;

    for(int i = 1 ; i < s.size() ; ++i) {

        if(s[i] == s[i-1])
        {
            int c = 1 , j = i;
            while(s[j] == s[i]) {
                c++;
                j++;
            }

            i = j;

            if(c >= 7) {
                cout << "YES" << endl;
                return 0;
            }
        }
    }

    cout << "NO" << endl;
    return 0;

}


