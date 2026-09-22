//
// Created by Yurim on 2026. 9. 21..
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> v(n);


        v[0] = (s[0]=='1');
        for (int i=1;i<n;i++) {
            if (s[i] == '1')  v[i] = v[i-1]+1;
            else v[i] = v[i-1];
        }

        if (s[0] != '0') {
            cout << n-v[n-1] << '\n';
            continue;
        }

        int f = n+1;
        for (int i=0;i<n;i++) {
            if (v[i] >0) {
                f = i; //1이 처음 나오는 곳
                break;
            }
        }

        int mini = n-v[n-1];
        for (int i=f;i<n;i++) {
            int tmp = v[i-1] + (n-i)-(v[n-1]-v[i-1]);
            if (tmp < mini) mini = tmp;
        }

        cout << min(mini, v[n-1]) << '\n';
    }
}