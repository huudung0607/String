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
bool palindrome(string s) {
	int l = 0, r = s.size() - 1;
	while (l <= r)
	{
		if (s[l] != s[r])
		{
			return false;
		}
		l++;
		r--;
	}
	return true;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	getline(cin, s);
	stringstream ss(s);
	string temp;
	while (ss >> temp)
	{
		cout << temp << " ";
	}
}
