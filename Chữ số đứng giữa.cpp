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
	long long n;
	cin >> n;
	string a;
	a = to_string(n);
	if (a.size() % 2 == 0)
	{
		cout << "NOT FOUND";
	}
	else
	{
		cout << a[a.size() / 2];
	}
}
