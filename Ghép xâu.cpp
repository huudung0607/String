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
bool cmp(string a, string b)
{
	return a + b > b + a;
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<string> v;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		v.push_back(s);
	}
	string res = "";
	sort(v.begin(), v.end(), cmp);
	for (auto x : v)
	{
		res += x;
	}
	cout << res;
}
