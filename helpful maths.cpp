#include <iostream>
using namespace std;

void solve()
{
    string str;
    cin >> str;
    int one = 0, two = 0, three = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '1')
            one++;
        else if (str[i] == '2')
            two++;
        else if (str[i] == '3')
            three++;
    }
    string ans = "";
    while (one--)
    {
        ans += "1";
        if (ans.length() != str.length())
            ans += "+";
    }
    while (two--)
    {
        ans += "2";
        if (ans.length() != str.length())
            ans += "+";
    }
    while (three--)
    {
        ans += "3";
        if (ans.length() != str.length())
            ans += "+";
    }
    cout << ans << endl;
}

int main()
{

    solve();
    return 0;
}
