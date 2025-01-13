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
	if (s.length() != 6)
	{
		return false;
	}
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] != '2' && s[i] != '8' && (s[i] != 't' && s[i] != 'T')
			&& (s[i] != 'e' && s[i] != 'E') && (s[i] !='c' && s[i] != 'C')
			&& (s[i] != 'h' && s[i] != 'H'))
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
	string s, temp;
	getline(cin, s);
	stringstream ss(s);
	int cnt = 0;
	while (ss>>temp)
	{
		if (check(temp))
		{
			cnt++;
		}
	}
	cout << cnt;
}
