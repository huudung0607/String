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
#include <queue>
#include <stack>
using namespace std;
int sum(string s)
{
	int sum = 0;
	for (auto x : s)
	{
		sum += x - '0';
	}
	return sum;
}
bool check(string s)
{
	int n = sum(s);
	while (n > 9)
	{
		n = sum(to_string(n));
	}
	return n == 9;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin >> s;
	if (check(s))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
