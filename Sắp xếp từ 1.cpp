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
bool cmp(string a, string b)
{
	if (a.length() == b.length())
	{
		return a < b;
	}
	return a.length() < b.length();
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	vector<string> a;
	vector<string> b;
	while (cin >> s)
	{
		a.push_back(s);
		b.push_back(s);
	}
	sort(a.begin(), a.end());
	for (auto x : a)
	{
		cout << x << " ";
	}
	cout << endl;
	sort(b.begin(), b.end(), cmp);
	for (auto x : b)
	{
		cout << x << " ";
	}

}
