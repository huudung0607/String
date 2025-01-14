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
	if (s[0] != '0')
	{
		return false;
	}
	if (s.length() != 10 && s.length() != 11)
	{
		return false;
	}
	for (int i = 0; i < s.size(); i++)
	{
		char c = s[i];
		if (isalpha(s[i]))
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
		if (check(s))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}
