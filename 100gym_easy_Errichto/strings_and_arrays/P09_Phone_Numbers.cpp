#include <iostream>
#include <string>
#include<vector>
#include <utility>
using namespace std;


int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    string s;
    cin >> n;
    cin>>s;

    int eight_count=0;

    for(char c: s) {
        if(c =='8') {
            eight_count++;
        }
    }

    cout<<min(eight_count, n/11)<<endl;

}
