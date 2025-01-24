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
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		int sum = 0;
		for (int i = 0; i < s.size() - 1; i++)
		{
			if (mp[s[i]] < mp[s[i + 1]])
			{
				sum -= mp[s[i]];
			}
			else
			{
				sum += mp[s[i]];
			}
		}
		sum += mp[s.back()];
		cout << sum << endl;
	}
}
