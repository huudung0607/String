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
string mail = "@xyz.edu.vn";
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin >> s;
	string python = "python";
	int index = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == python[index])
		{
			index++;
		}
		if (index == 6)
		{
			cout << "YES";
			return 0;
		}
	}
	cout << "NO" << endl;
}
