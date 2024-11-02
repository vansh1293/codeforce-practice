#include <iostream>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        if (str.length() <= 10)
        {
            cout << str << endl;
        }
        else
        {
            cout << str[0] << str.length() - 2 << str[str.length() - 1] << endl;
        }
    }
}

int main()
{
    solve();
    return 0;
}
