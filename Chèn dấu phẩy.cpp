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
	int cnt = 0;
	if (s.length() % 3 == 0)
	{
		for (int i = s.length() - 1; i >= 0; i--)
		{
			cnt++;
			if (i == 2)
			{
				break;
			}
			if (cnt == 3)
			{
				s.insert(i, ",");
				cnt = 0;
			}
		}
		cout << s << endl;
	}
	else
	{
		for (int i = s.length() - 1; i >= 0; i--)
		{
			cnt++;
			if (cnt == 3)
			{
				s.insert(i, ",");
				cnt = 0;
			}
		}
		cout << s << endl;
	}
}
