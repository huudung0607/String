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
		res = (res * 10) % m + (s[i] - '0') % m;
		res %= m;
	}
	cout << res;
}
