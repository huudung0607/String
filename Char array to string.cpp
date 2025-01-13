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
string array_to_string(char a[], int n) {
	string s = "";
	for (int i = 0; i < n; i++)
	{
		s += a[i];
	}
	return s;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	char a[10001];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	cout << array_to_string(a, n) << endl;
}
