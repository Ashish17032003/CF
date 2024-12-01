//
// Created by Ashish Shankar on 22/09/24.
//

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

    int n, l, a;
    cin >> n >> l >> a;

    int ans =0 ;

    if(n==0) {
        cout<<l/a<<endl;
        return 0;
    }

    vector<pair<int, int>> pairs(n);

    for(int i=0; i<n; i++) {
        int ti, li;
        cin>>ti>>li;
        pairs[i]=make_pair(ti, ti+li);
    }

    // before 1st cust
    ans = ans + pairs[0].first/a;

    //after last
    ans = ans + (l-pairs[n-1].second)/a;

    // between tasks



    for(int i=1; i<pairs.size(); i++) {
        int free_time = pairs[i].first - pairs[i - 1].second;
        ans += free_time / a;
    }

    cout<< ans << endl;
    return 0;
}
