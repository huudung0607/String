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

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	getline(cin, s);
	for (int i = 0; i < s.size(); i++)
	{
		if (!isalnum(s[i]))
		{
			s[i] = ' ';
		}
	}
	stringstream ss(s);
	string temp;
	int cnt = 0;
	while (ss >> temp)
	{
		cnt++;
	}
	cout << cnt;
}
