#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int balance = 0;
        int minBalance = 0;

        for (char c : s) {
            if (c == '(') balance++;
            else balance--;

            minBalance = min(minBalance, balance);
        }

        if (balance == 0 && minBalance >= -1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}