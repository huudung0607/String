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
	map<char, int> mp;
	for (int i = 0; i < s.length(); i++)
	{
		mp[s[i]]++;
		if (mp[s[i]] >= 2)
		{
			cout << s[i];
			return 0;
		}
	}
	cout << "NONE";
}
