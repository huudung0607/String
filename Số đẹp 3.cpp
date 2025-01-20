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

bool khonggiam(string s)
{
	for (int i = 1; i < s.size(); i++)
	{
		if ((s[i] - '0') < (s[i - 1]- '0'))
		{
			return false;
		}
	}
	return true;
}
bool khongtang(string s)
{
	for (int i = 1; i < s.size(); i++)
	{
		if ((s[i] - '0') > (s[i - 1] - '0'))
		{
			return false;
		}
	}
	return true;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin >> s;
	if (khonggiam(s) || khongtang(s))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
