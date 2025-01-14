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
bool check1(string s)
{
	if (s[0] % 2 == 0 && s[s.size() - 1] % 2 != 0)
	{
		return false;
	}
	if (s[0] % 2 != 0 && s[s.size() - 1] % 2 == 0)
	{
		return false;
	}
	return true;
}
bool check2(string s)
{
	for (int i = 1; i < s.size(); i++)
	{
		if (abs(s[i] - s[i - 1]) == 3)
		{
			return false;
		}
	}
	return true;
}
bool check3(string s)
{
	for (int i = 1; i < s.size(); i++)
	{
		if (s[i] == '2' && s[i - 1] =='8')
		{
			return false;
		}
		if (s[i] == '8' && s[i - 1] == '2')
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
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		string s;
		cin >> s;
		cin.ignore();
		if (check1(s) && check2(s) && check3(s))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}
