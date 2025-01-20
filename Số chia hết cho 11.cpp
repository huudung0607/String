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
bool check(string s)
{
	if (s.size() < 2 && s[0] == '0')
	{
		return true;
	}
	long long sumchan = 0;
	long long sumle = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (i % 2 == 0)
		{
			sumle += s[i] - '0';
		}
		else
		{
			sumchan += s[i] - '0';
		}
	}
	if (abs(sumchan - sumle) % 11 == 0 || abs(sumle - sumchan) % 11 == 0)
	{
		return true;
	}
	return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin >> s;
	if (check(s))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
