//
// Created by Yurim on 2026. 9. 21..
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    int a, b, c;
    while (t--) {
        cin >> a>> b>> c;
        if (a>=b) cout << a+c-b << '\n';
        else cout <<  max(b-a, a+c-b) << '\n';
    }

}
