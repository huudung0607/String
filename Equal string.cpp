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
	int tong = 0;
	map<int, int> mp;
	int ans = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '1')
		{
			tong++;
		}
		else
		{
			tong--;
		}
		if (tong == 0)
		{
			ans = max(ans, i + 1);
		}
		if (mp.find(tong) != mp.end())
		{
			ans = max(ans, i - mp[tong]);
		}
		if (mp.find(tong) == mp.end())
		{
			mp[tong] = i;
		}
	}
	cout << ans << endl;
}
