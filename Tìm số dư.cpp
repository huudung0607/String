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

int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	string s;
	cin >> s;
	int r = 0;
	for (auto x : s)
	{
		r = r * 10 - (x - '0');
		r %= 4;
	}
	if (r == 0)
	{
		cout << 4 << endl;
	}
	else
	{
		cout << 0;
	}
}
