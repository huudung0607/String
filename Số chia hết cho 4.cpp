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
	if (s.size() < 2 && (s[0] - '0') % 4 == 0)
	{
		return true;
	}
	if (s.size() > 1)
	{
		int sum = 0;
		int num1 = s[s.size() - 1] - '0';
		int num2 = s[s.size() - 2] - '0';
		sum = sum * 10 + num2;
		sum = sum * 10 + num1;
		if (sum % 4 == 0)
		{
			return true;
		}
		return false;
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
