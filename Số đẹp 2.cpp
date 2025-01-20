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

bool thuannghich(string s)
{
	int l = 0, r = s.size() - 1;
	while (l <= r)
	{
		if (s[l] != s[r])
		{
			return false;
		}
		l++;
		r--;
	}
	return true;
}
bool chua6(string s)
{
	int cnt = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '6')
		{
			cnt++;
		}
		if (cnt >= 1)
		{
			return true;
		}
	}
	return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin >> s;
	if (thuannghich(s) && chua6(s))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
