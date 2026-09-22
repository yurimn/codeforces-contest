//
// Created by Yurim on 2026. 9. 21..
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    int n, a, b, c;
    while (t--) {
        cin>>n;
        cin >> a>> b>> c;
        cout << n-min(min(a, b), c) << '\n';
    }
}
