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
	string a = s;
	string b = s;
	reverse(a.begin(), a.end());
	cout << a << endl;
	for (int i = 0; i < b.length(); i++)
	{
		b[i] = tolower(b[i]);
	}
	cout << b << endl;
	for (int i = 0; i < b.length(); i++)
	{
		b[i] = toupper(b[i]);
	}
	cout << b << endl;
}
