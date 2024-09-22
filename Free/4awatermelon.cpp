//
// Created by Ashish Shankar on 22/09/24.
//

#include <iostream>
using namespace std;


// ----------------------------------------------------------------------


void solve() {

}


// ----------------------------------------------------------------------

int main() {

    #ifndef ONLINE_JUDGE
        freopen("input.txt" , "r" ,  stdin);
        freopen("output.txt" , "w" , stdout);
    #endif


    int n;
    cin >> n ;


    if(n==2 || n==0) {
        cout<<"NO"<<endl;
    }
    else if(n%2==0) {
        cout<<"YES"<<endl;
    }
    else {
        cout << "NO" << endl;
    }
    return 0;
}


