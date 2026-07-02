//
// Created by Yurim on 2026. 6. 19..
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<long long int> v(n);
        for (int i=0;i<n;i++) cin>>v[i];

        bool flag = false;
        for (int i=0;i<n-1;i++) {
            if (v[i] > v[i+1]) flag = true;
        }
        if (!flag) {
            cout << v[n-1] << '\n';
            continue;
        }


        int s=0;
        while (v[s] <= v[s+1]) s++;

        for (int i=s; i<n-1;i++) {
            if (v[i] > v[i+1]) {
                long long int tmp = v[i];
                v[i] = v[i+1];
                v[i+1] += tmp;
            }
        }
        cout << v[n-1] << '\n';


    }
}