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
	int sum = 0;
	for (int i = 0; i < s.length(); i++)
	{
		if (isdigit(s[i]))
		{
			int num = s[i] - '0';
			sum += num;
		}
	}
	cout << sum;
}
