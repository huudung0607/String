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
	string s;
	cin >> s;
	for (int i = 0; i < s.size() -2; i++)
	{
		if (s.size() < 2)
		{
			break;
		}
		if (s[i] == '1' && s[i + 1] == '1' && s[i + 2]=='1')
		{
			s.erase(i, 3);
			i--;
		}
	}
	if (s.size() == 0)
	{
		cout << "EMPTY";
	}
	else
	{
		cout << s;
	}
}
