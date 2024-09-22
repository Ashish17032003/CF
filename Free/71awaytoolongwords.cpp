#include <iostream>
#include <string>
using namespace std;

// ----------------------------------------------------------------------

void solve(const string &s) {
    long n = s.length();
    string ans;

    ans = s[0] + to_string(n - 2) + s[n - 1];

    cout << ans << endl;
}

// ----------------------------------------------------------------------

int main() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        long n = s.length();

        if(n<=10) {
            cout<<s<<endl;
        }
        else {
            solve(s);
        }

    }

    return 0;
}
