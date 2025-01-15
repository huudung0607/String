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

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin >> s;
	map<char, int> mp;
	for (int i = 0; i < s.size(); i++)
	{
		mp[s[i]]++;
	}
	int maxval = -1;
	char maxchar = NULL;
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
	char minchar = NULL;
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
