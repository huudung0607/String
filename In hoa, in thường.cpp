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
	stringstream ss(s);
	string temp;
	while (ss>>temp)
	{
		for (int i = 0; i < temp.size(); i++)
		{
			if (temp[i] >= 'a' && temp[i] <= 'z')
			{
				temp[i] -= 32;
			}
		}
		cout << temp << " ";
	}
	cout << endl;
	stringstream ss2(s);
	string temp2;
	while (ss2>>temp2)
	{
		for (int i = 0; i < temp2.size(); i++)
		{
			if (temp2[i] >= 'A' && temp2[i] <= 'Z')
			{
				temp2[i] += 32;
			}
		}
		cout << temp2 << " ";
	}
}
