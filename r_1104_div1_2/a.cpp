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
        vector<int> v(n);
        for (int i=0;i<n;i++) cin>>v[i];
        int sum = 0;
        for (int i=0;i<n;i++) {
            sum += v[min_element(v.begin(), v.begin()+i+1) - v.begin()];
        }
        cout <<sum << '\n';

    }
}
