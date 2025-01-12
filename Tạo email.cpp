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
	getline(cin, s);
	for (auto& x : s)
	{
		x = tolower(x);
	}
	stringstream ss(s);
	string tmp;
	vector<string> v;
	while (ss >>tmp)
	{
		v.push_back(tmp);
	}
	string email = v[v.size() - 1];
	for (int i = 0; i < v.size() - 1; i++)
	{
		email += v[i][0];
	}
	email += "@28tech.com.vn";
	cout << email;
}
