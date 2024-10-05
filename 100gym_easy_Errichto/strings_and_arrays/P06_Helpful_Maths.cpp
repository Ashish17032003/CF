//
// Created by Ashish Shankar on 22/09/24.
//


#include <iostream>
#include <algorithm>
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


    string s;
    cin>>s;

    vector<char> v;

    if(s.length() == 1) {
        cout<< s <<endl;
        return 0;
    }

    for(int i=0;i<s.length();i+=2) {
        v.push_back(s[i]);
    }

    sort(v.begin(),v.end());

    for(int i=0; i<v.size(); i++) {
        if (i > 0) cout << "+";
        cout << v[i];
    }

    cout<<endl;

    return 0;
}


