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
	if (a.find(b) != string::npos)
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
