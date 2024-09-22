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
    cin>>n;

    int ans = 0;

    while(n--) {
        vector<int> v(3);

        int count  = 0;

        for(int i=0;i<3;i++) {
            cin>>v[i];
            if(v[i]==1) count++;
        }

        if(count>=2) {
            ans++;
        }
        // solve();
    };

    cout<<ans<<endl;
    return 0;
}


