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
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;
unordered_map<char, int> mp = { {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000} };
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin >> s;
	map<pair<int, int>, int > mp;
	int c2 = 0, c8 = 0, ct = 0;
	long long ans = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '2')
		{
			c2++;
		}
		if (s[i] == '8')
		{
			c8++;
		}
		if (s[i] == 't')
		{
			ct++;
		}
		pair<int, int> p = { c2 - c8,c8 - ct };
		if (p.first == 0 && p.second == 0)
		{
			ans++;
		}
		if (mp.find(p) != mp.end())
		{
			ans += mp[p];
		}
		mp[p]++;
	}
	cout << ans << endl;
}
