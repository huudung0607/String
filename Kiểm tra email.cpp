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
string mail1 = "@gmail.com";
string mail2 = "@28tech.com.vn";
string mail3 = "@yahoo.com";
string mail4 = "@hotmail.com";
bool checkmail(string s){
	int index = -1;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '@')
		{
			index = i;
			break;
		}
	}
	s.erase(0, index);
	if (s != mail1 && s != mail2 && s!= mail3 && s != mail4)
	{
		return false;
	}
	return true;
}
bool checkchar(string s) {
	for (int i = 0; i < s.size(); i++)
	{
		if (isspace(s[i]))
		{
			return false;
		}
		if (s[i] >= '!' && s[i] <= '-')
		{
			return false;
		}
		if (s[i] == '/')
		{
			return false;
		}
		if (s[i] >= ':' && s[i] <= '?')
		{
			return false;
		}
		if (s[i] >= '[' && s[i] <= '`')
		{
			return false;
		}
		if (s[i] >= '{' && s[i] <= '~')
		{
			return false;
		}
	}
	return true;
}
bool checka(string s)
{
	int cnt = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == '@')
		{
			cnt++;
		}
	}
	if (cnt > 1)
	{
		return false;
	}
	return true;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		string s;
		cin >> s;
		cin.ignore();
		if (checkmail(s) && checkchar(s) && checka(s))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}
