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
	string s;
	cin >> s;
	long long cnt = 0;
	long long maxcnt = LONG_MIN;
	char maxchar = NULL;
	s.push_back('0');
	for (int i = 1; i < s.size(); i++)
	{
		char c = s[i];
		char c2 = s[i - 1];
		cnt++;
		if (s[i] != s[i - 1])
		{
			if (cnt > maxcnt || cnt == maxcnt && s[i - 1] > maxchar)
			{
				maxcnt = cnt;
				maxchar = s[i - 1];
				cnt = 0;
			}
			else
			{
				cnt = 0;
			}
		}
	}
	for (int i = 0; i < maxcnt; i++)
	{
		cout << maxchar;
	}
}
