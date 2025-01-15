#include <bits/stdc++.h>
using namespace std;

using ll = long long;

string getDate(string s){
    stringstream ss(s);
    string ngay, thang, nam;
    getline(ss, ngay, '/');
    getline(ss, thang, '/');
    getline(ss, nam, '/');
    return nam + " " + thang + " " + ngay;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    string s, t; cin >> s >> t;
    string s1 = getDate(s), t1 = getDate(t);
    if(s1 < t1) cout << "28tech\n";
    else if(s1 > t1) cout << "29tech\n";
    else cout << "30tech\n"; 
}
