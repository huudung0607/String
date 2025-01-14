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
bool cmp(pair<string, int> a, pair<string, int> b)
{
	if (a.second == b.second)
	{
		return a.first < b.first;
	}
	return a.second > b.second;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	map<string, int> mp;
	while (getline(cin,s))
	{
		stringstream ss(s);
		string team1, team2;
		getline(ss, team1, '-');
		getline(ss, team2);
		team1 = team1.substr(0, team1.find_last_not_of(" ") + 1);
		team2 = team2.substr(team2.find_first_not_of(" "));    
		mp[team1]++;
		mp[team2]++;
	}
	vector<pair<string, int>> v;
	for (auto x : mp)
	{
		v.push_back({ x.first,x.second });
	}
	sort(v.begin(), v.end(), cmp);
	for (auto x : v)
	{
		cout << x.first << " " << x.second << endl;
	}
}
