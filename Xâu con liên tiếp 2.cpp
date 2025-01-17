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
	string s;
	cin >> s;
    string maxstr, curstr;
    curstr += s[0]; 
    for (int i = 1; i < s.size(); i++) {
        if (s[i] != s[i - 1]) {
            curstr += s[i];
        }
        else {
            if (curstr.length() > maxstr.length() ||
                (curstr.length() == maxstr.length() && curstr > maxstr)) {
                maxstr = curstr;
            }
            curstr = s[i]; 
        }
    }
    if (curstr.length() > maxstr.length() ||
        (curstr.length() == maxstr.length() && curstr > maxstr)) {
        maxstr = curstr;
    }
    cout << maxstr;
}
