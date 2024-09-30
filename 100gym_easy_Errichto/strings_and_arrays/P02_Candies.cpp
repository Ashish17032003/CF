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
    int start = 0;
    int end = 0;
    int ans  = 0;

    cin >> start >> end ;

    for(int i=0; i<n; i++) {
        if( i>= start && i<=end) {
            ans+= v[i];
        }
    }

    cout<<ans<<endl;
    return 0;
}


