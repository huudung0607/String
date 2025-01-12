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
	string s;
	getline(cin,s);
	for (auto& x : s)
	{
		if (isalpha(x))
		{
			x = ' ';
		}
	}
	stringstream ss(s);
	string temp;
	long long sum = 0;
	while (ss>>temp)
	{
		sum += stoll(temp);
	}
	cout << sum;
}
