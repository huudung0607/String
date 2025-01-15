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

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a, b;
	getline(cin, a);
	getline(cin, b);
	stringstream ss(a);
	string res = "", temp;
	while (ss >> temp)
	{
		res += toupper(temp[0]);
		for (int i = 1; i < temp.size(); i++)
		{
			res += tolower(temp[i]);
		}
		res += " ";
	}
	res.pop_back();
	cout << res << endl;
	if (b[1] == '/')
	{
		b.insert(0, "0");
	}
	if (b[3] == '/')
	{
		b.insert(2, "0");
	}
	if (b[4] == '/')
	{
		b.insert(3, "0");
	}
	cout << b;
}
