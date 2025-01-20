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
	string s; int k;
	cin >> s >> k;
	for (int i = s.size() - 1; i >= s.size() - k; i--)
	{
		if (s[i] == '1')
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}
