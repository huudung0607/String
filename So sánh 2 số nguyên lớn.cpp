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
	string n;
	cin >> n;
	string m;
	cin >> m;
	if (n.length() != m.length())
	{
		if (n.length() > m.length())
		{
			cout << "28tech";
		}
		else
		{
			cout << "29tech";
		}
	}
	else
	{
		if (n > m)
		{
			cout << "28tech";
		}
		else if (n < m)
		{
			cout << "29tech";
		}
		else
		{
			cout << "30tech";
		}
	}
}
