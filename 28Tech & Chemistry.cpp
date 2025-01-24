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
long long ntk(string s, map<string,int> m)
{
	long long sum = 0;
	for (size_t i = 0; i < s.size();)
	{
		string e(1, s[i++]);
		if (i < s.size() && islower(s[i]))
		{
			e += s[i++];
		}
		int cnt = 0;
		while (i < s.size() && isdigit(s[i]))
		{
			cnt = cnt * 10 + (s[i++] - '0');
		}
		if (cnt ==0)
		{
			cnt = 1;
		}
		if (m.count(e))
		{
			sum += m[e] * cnt;
		}
	}
	return sum;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	map<string, int> nthh;
	for (int i = 0; i < 10; i++)
	{
		string s; int m;
		cin >> s >> m;
		nthh.insert({ s,m });
	}
	int t;
	cin >> t;
	while (t--)
	{
		string s;
		cin >> s;
		cout << ntk(s, nthh) << endl;
	}
}
