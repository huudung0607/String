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
#include <unordered_map>
using namespace std;
string sum(string a, string b)
{
	if (a.length() < b.length())
	{
		swap(a, b);
	}
	string res = "";
	int cnt = 0;
	int A = a.length(), B = b.length();
	for (int i = 0; i < A; i++)
	{
		int soA = a[A - i - 1] - '0';
		int soB = (i < B) ? b[B - i - 1] - '0' : 0;
		int sum = soA + soB + cnt;
		cnt = sum / 10;
		res += (sum % 10) + '0';
	}
	if (cnt)
	{
		res += cnt + '0';
	}
	reverse(res.begin(), res.end());
	return res;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin >> t;
	cin.ignore();
	while (t--)
	{
		string a, b;
		cin >> a >> b;
		cout << sum(a, b) << endl;
	}
}
