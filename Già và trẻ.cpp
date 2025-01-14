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
	string a, b;
	getline(cin, a);
	getline(cin, b);
	stringstream ssa(a);
	stringstream ssb(b);
	string tempa, tempb;
	vector<string> va;
	vector<string> vb;
	//
	while (getline(ssa,tempa,'/'))
	{
		va.push_back(tempa);
	}
	while (getline(ssb,tempb,'/'))
	{
		vb.push_back(tempb);
	}
	if (va[2] == vb[2])
	{
		if (va[1] == vb[1])
		{
			if (va[0] < vb[0])
			{
				cout << "28tech";
			}
			else if (va[0] > vb[0])
			{
				cout << "29tech";
			}
			else
			{
				cout << "30tech";
			}
		}
		else if (va[1] < vb[1])
		{
			cout << "28tech";
		}
		else if (va[1] > vb[1])
		{
			cout << "29tech";
		}
	}
	else if (va[2] < vb[2])
	{
		cout << "28tech";
	}
	else
	{
		cout << "29tech";
	}
}
