#include <iostream>
#include <map>
using namespace std;

void solve()
{
    string str;
    cin >> str;
    int l = 0;
    map<char, int> mp;
    for (int i = 0; i < str.length(); i++)
    {
        if (mp.find(str[i]) == mp.end())
        {
            mp[str[i]] = 1;
            l++;
        }
    }
    if (l % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;
}

int main()
{
    solve();
    return 0;
}
