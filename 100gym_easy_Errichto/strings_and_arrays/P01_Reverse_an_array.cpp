//
// Created by Ashish Shankar on 22/09/24.
//

#include <iostream>
#include <vector>
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

    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for(int i=0; i<n/2; i++) {
        int temp = v[i];
        v[i] = v[n-1-i];
        v[n-1-i] = temp;
    }

    for(int i=0; i<n; i++) {
        cout << v[i] << " ";
    }

    return 0;
}



