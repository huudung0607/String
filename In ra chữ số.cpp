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
	vector<char> num;
	vector<char> alpha;
	for (int i = 0; i < s.length(); i++)
	{
		if (isalpha(s[i]))
		{
			alpha.push_back(s[i]);
		}
		else
		{
			num.push_back(s[i]);
		}
	}
	for (auto x : num)
	{
		cout << x;
	}
	cout << endl;
	for (auto x : alpha)
	{
		cout << x;
	}
}
