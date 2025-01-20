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
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin >> s;
	long long m;
	cin >> m;
	long long res = 0;
	for (int i = 0; i < s.size(); i++)
	{
		res = (res * 10) % 4 + (s[i] - '0') % 4;
		res %= 4;
	}
	if (res == 1)
	{
		cout << 8;
	}
	else if (res == 2)
	{
		cout << 4;
	}
	else if (res == 3)
	{
		cout << 2;
	}
	else if (res == 0)
	{
		cout << 6;
	}
}
