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


    string a , b ; cin >> a >> b;

    int found = 0;

    for(int i = 0 ; i < a.size() ; ++i) {

        if(a[i] >= 65 && a[i] <= 90) {
            a[i] = a[i] + 32;
        }

        if(b[i] >= 65 && b[i] <= 90) {
            b[i] = b[i] + 32;
        }

        if(a[i] > b[i]) {
            found = 1;
        } else if( a[i] < b[i] ) {
            found = -1;
        }

    }

    cout << found << endl;
    return 0;
}


