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
	string s, temp;
	getline(cin, s);
	stringstream ss(s);
	int i = 1;
	while (ss >> temp)
	{
		if (i % 2 == 0)
		{
			reverse(temp.begin(), temp.end());
		}
		cout << temp << " ";
		i++;
	}
}
