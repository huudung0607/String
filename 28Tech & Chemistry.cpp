#include <iostream>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main() {
	map<string, int> mp;
	for (int i = 0; i < 10; i++)
	{
		string nt;
		int ntk;
		cin >> nt >> ntk;
		mp.insert({ nt,ntk });
	}
	int t;
	cin >> t;
	while (t--)
	{
        string s;
        cin >> s;
        vector<pair<string, int>> v;
        for (int i = 0; i < s.size(); ) {
            string element = "";
            if (isalpha(s[i])) {
                element += s[i];
                i++;
                if (i < s.size() && islower(s[i])) {
                    element += s[i];
                    i++;
                }
            }
            string number = "";
            while (i < s.size() && isdigit(s[i])) {
                number += s[i];
                i++;
            }
            int count = (number == "") ? 1 : stoi(number);
            v.push_back({ element, count });
        }
        int total = 0;
        for (auto x : v) {
            if (mp.find(x.first) != mp.end())
            {
                total += mp[x.first] * x.second;
            }
        }
        cout << total << endl;
	}
}
