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
	int cntc = 0;
	int cnts = 0;
	int cntdb = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (isalpha(s[i]))
		{
			cntc++;
		}
		else if (isdigit(s[i]))
		{
			cnts++;
		}
		else
		{
			cntdb++;
		}
	}
	cout << cntc << " " << cnts << " " << cntdb;
}
