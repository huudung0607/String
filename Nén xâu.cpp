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
#include <queue>
#include <stack>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin >> s;
	s += '#';
	int dem = 1;
	char c = s[0];
	for (int i = 1; i < s.size(); i++)
	{
		if (c == s[i])
		{
			dem++;
		}
		else
		{
			cout << c << dem;
			c = s[i];
			dem = 1;
		}
	}
}
