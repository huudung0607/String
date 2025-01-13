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
	if (s[1] == '/')
	{
		s.insert(0, "0");
	}
	if (s[3] == '/')
	{
		s.insert(2, "0");
	}
	if (s[4] == '/')
	{
		s.insert(3, "0");
	}
	cout << s;
}
