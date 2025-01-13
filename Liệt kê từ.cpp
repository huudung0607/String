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

bool check(string s)
{
	for (int i = 0; i < s.size(); i++)
	{
		char c = s[i];
		if (islower(s[i]))
		{
			return false;
		}
	}
	return true;
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	getline(cin, s);
	///'.', ',', '!', '?'
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '.' || s[i] == ',' || s[i] == '!' || s[i] == '?')
		{
			s[i] = ' ';
		}
	}
	stringstream ss(s);
	string temp;
	while (ss >> temp)
	{
		cout << temp << " ";
	}
}
