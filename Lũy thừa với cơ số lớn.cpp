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
long long powmod(long long n, long long m)
{
	long long res = 1;
	while (m != 0)
	{
		if (m % 2 == 1 )
		{
			res = res * n;
			res %= mod;
		}
		n = n * n;
		n %= mod;
		m /= 2;
	}
	return res;
}
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
		res = (res * 10) % mod + (s[i] - '0') % mod;
		res %= mod;
	}
	cout << powmod(res, m);
}
