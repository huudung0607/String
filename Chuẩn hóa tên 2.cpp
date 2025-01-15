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
	string s;
	getline(cin, s);
	stringstream ss(s);
	string temp, res = "";
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
	auto cachthua = res.find_last_of(" ");
	string ten = res.substr(cachthua + 1);
	for (int i = 0; i < ten.size(); i++)
	{
		ten[i] = toupper(ten[i]);
	}
	string hoten = res.substr(0, cachthua);
	cout << hoten << ", " << ten << endl;
	cout << ten << ", " << hoten << endl;
}
