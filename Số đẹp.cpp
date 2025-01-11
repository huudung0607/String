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
using namespace std;
const int mod = 1e9 + 7;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin >> s;
	bool check = true;
	for (int i = 1; i < s.length(); i++)
	{
		if (abs(s[i] - s[i - 1]) != 1)
		{
			check = false;
		}
	}
	if (check)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
