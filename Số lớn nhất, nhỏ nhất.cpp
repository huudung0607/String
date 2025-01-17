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
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int m, s;
	cin >> m >> s;
	if (m == 1 && s == 0)
	{
		cout << 0 << endl;
		cout << 0;
		return 0;
	}
	if (s > 9 * m)
	{
		cout << "NOT FOUND";
		return 0;
	}
	string min, max;
	int num = s;
	for (int i = 0; i < m; i++)
	{
		if (num >= 9)
		{
			max += '9';
			num -= 9;
		}
		else
		{
			max += to_string(num);
			num = 0;
		}
	}
	num = s - 1;
	for (int i = 0; i < m - 1; i++)
	{
		if (num >= 9)
		{
			min += '9';
			num -= 9;
		}
		else
		{
			min += to_string(num);
			num = 0;
		}
	}
	min += '1';
	reverse(min.begin(), min.end());
	cout << min << endl;
	cout << max;
}
