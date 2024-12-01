#include <iostream>
#include <string>
using namespace std;

bool isvowel(char c) {

    if (c >= 'A' && c <= 'Z') {
        c = c + 32;
    }


    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y';
}

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    string s, ans;
    cin >> s;
    int n = s.length();

    for (int i = 0; i < n; i++) {
        char c = s[i];
        if (c >= 'A' && c <= 'Z') {
            c = c + 32;
        }

        if (isvowel(c)) {
            continue;
        }
        ans += '.';
        ans += c;
    }
    cout << ans << endl;

    return 0;
}
