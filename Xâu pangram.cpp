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
bool pangram(string s)
{
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	int cnt[26] = { 0 };
	for (int i = 0; i < s.size(); i++)
	{
		cnt[s[i] - 'a'] = 1;
	}
	for (int i = 0; i < 26; i++)
	{
		if (cnt[i] == 0)
		{
			return false;
		}
	}
	return true;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin >> s;
	if (pangram(s))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
