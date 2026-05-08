# Parentheses Balance Check

## Idea

We simulate the bracket sequence using a balance counter:

* `'('` → `+1`
* `')'` → `-1`

### Conditions for `"YES"`

1. Final balance must be `0`

   * same number of opening and closing brackets

2. Minimum balance must not go below `-1`

   * sequence is allowed to be “almost valid”
   * but it can’t become too broken

It behaves like tracking a submarine underwater 🌊
If it dives too deep below zero, the answer sinks into `"NO"`.

---

## Complexity

* **Time:** `O(n)`
* **Space:** `O(1)`

---

## C++ Solution

```cpp id="8x2kq"
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
            if (c == '(')
                balance++;
            else
                balance--;

            minBalance = min(minBalance, balance);
        }

        if (balance == 0 && minBalance >= -1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}
```
