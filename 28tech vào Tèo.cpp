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
using namespace std;
const int mod = 1e9 + 7;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin >> s;
	vector<char> a;
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] != '2' && s[i] != '8' && s[i] != 't' && s[i] != 'e'
			&& s[i] != 'c' && s[i] != 'h')
		{
			a.push_back(s[i]);
		}
	}
	if (a.size() != 0)
	{
		for (auto x : a)
		{
			cout << x;
		}
	}
	else
	{
		cout << "EMPTY";
	}
}
