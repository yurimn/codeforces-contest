//
// Created by Yurim on 2026. 6. 18..
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> a(n), b(n), s(n), v(n);
        bool flag = false;
        for (int i=0;i<n;i++) {
            cin>>a[i];
            s[i] = a[i];
        }
        for (int i=0;i<n;i++) cin>>b[i];

        sort(s.begin(), s.end());
        for (int i=0;i<n;i++) {
            if (s[i] > b[i]) flag = true;
        }
        if (flag) {
            cout << -1 << '\n';
            continue;
        }

        for (int i=0;i<n;i++) {
            for (int j=0;j<n;j++) {
                if (b[i] >= a[j] && !v[j]) {
                    v[j] = 1;
                    a[j] = b[i];
                    break;
                }
            }
        }

        // for (int i=0;i<n;i++) cout << a[i] << ' ';
        // cout << '\n';

        int cnt = 0;
        for (int i=n-1;i>0;i--) {
            for (int j=0;j<i;j++) {
                if (a[j] > a[j+1]) {
                    cnt++;
                    swap(a[j], a[j+1]);
                }
            }
        }
        cout << cnt << '\n';
    }
}