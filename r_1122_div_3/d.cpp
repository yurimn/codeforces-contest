//
// Created by Yurim on 2026. 9. 22..
//
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int &vv:v) cin>>vv;
        for (int i=0;i<n;i++) v[i] = v[i]-i;

        ranges::sort(v);

        v.erase(ranges::unique(v).begin(), v.end());

        for (int i=0;i<v.size();i++) {
            v[i] += n-i;
        }


        unordered_map<int, int> um;
        for (int vv:v) um[vv]++;

        int max_count = 0;
        for (auto &u:um) {
            if (max_count < u.second) {
                max_count = u.second;
            }
        }
        cout << max_count << '\n';

    }
}