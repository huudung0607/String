//https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
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

int main()
{
	string s;
	cin >> s;
	int l = 0, r = 0; int maxlenth = 0;
	set<char> se;
	int n = s.size();
	for (int i = r; i < n; i++) {
		while (se.find(s[i]) != se.end()) {
			se.erase(s[l]);
			l += 1;
		}
		int len = (i - l) + 1;
		maxlenth = max(len, maxlenth);
		se.insert(s[i]);
	}
	cout << maxlenth;
}

