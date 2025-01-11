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
	if (s == "0")
	{
		cout << 0 << endl;
		return 0;
	}
	sort(s.begin(), s.end(),greater<char>());
	for (int i = s.length() - 1; i >= 0; i--)
	{
		if (s[i] =='0')
		{
			s.pop_back();
		}
	}
	sort(s.begin(), s.end());
	cout << s;
}
