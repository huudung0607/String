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
	map<string, int> mp;
	while (cin >> s)
	{
		mp[s]++;
	}
	int maxval = -1;
	string maxchar;
	for (auto x : mp)
	{
		if (x.second > maxval || x.second == maxval && x.first > maxchar)
		{
			maxval = x.second;
			maxchar = x.first;
		}
	}
	cout << maxchar << " " << maxval << endl;
	int minval = 100000;
	string minchar;
	for (auto x : mp)
	{
		if (x.second < minval || x.second == minval && x.first > minchar)
		{
			minchar = x.first;
			minval = x.second;
		}
	}
	cout << minchar << " " << minval << endl;
}
