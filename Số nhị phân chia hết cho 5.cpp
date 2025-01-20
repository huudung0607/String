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
	long long sum = 0;
	long long lt = 1;
	for (int i = s.size() - 1; i >= 0; i--)
	{
		sum = sum + (s[i] - '0') % 5 * (long long)lt;
		sum %= 5;
		lt *= 2;
		lt %= 5;
	}
	if (sum == 0)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
