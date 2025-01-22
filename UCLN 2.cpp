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
	long long a, x, y;
	cin >> a >> x >> y;
	long long g = gcd(x, y);
	for (long long i = 1; i <= g; i++)
	{
		cout << a;
	}
}
