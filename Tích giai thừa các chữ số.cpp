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
	string res = "";
	for (auto x : s)
	{
		if (x == '6')
		{
			res += "35";
		}
		else if (x == '4')
		{
			res += "322";
		}
		else if (x == '8')
		{
			res += "2227";
		}
		else if (x == '9')
		{
			res += "3327";
		}
		else if (x != '0' && x != '1')
		{
			res += x;
		}
	}
	sort(res.begin(), res.end(), greater<char>());
	cout << res;
}
