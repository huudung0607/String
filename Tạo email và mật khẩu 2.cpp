#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;
const int mod = 1e9 + 7;
string mail = "@xyz.edu.vn";
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	cin.ignore();
	map<string, int> mp;
	while (n--)
	{
		string a;
		getline(cin, a);
		for (auto& x : a)
		{
			x = tolower(x);
		}
		stringstream ss(a);
		string w;
		vector<string> v;
		while (ss >> w)
		{
			v.push_back(w);
		}
		string email = v[v.size() - 2];
		for (int i = 0; i < v.size() - 2; i++)
		{
			email += v[i][0];
		}
		mp[email]++;
		if (mp[email] == 1)
		{
			email += mail;
			cout << email << endl;
		}
		else
		{
			cout << email << mp[email] << mail << endl;
		}
		string ns = v[v.size() - 1];
		stringstream ss2(ns);
		while (getline(ss2,w,'/'))
		{
			cout << stoi(w);
		}
		cout << endl;
	}
}
