#include <iostream>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        if ((a == 0 && b % 2 != 0))
        {
            cout << "no" << endl;
            continue;
        }
        else if (b == 0 && a % 2 != 0)
        {
            cout << "no" << endl;
            continue;
        }
        else if (((2 * b + a) % 2 != 0))
        {
            cout << "no" << endl;
            continue;
        }
        else
        {
            cout << "yes" << endl;
            continue;
        }
    }
}

int main()
{

    solve();
    return 0;
}
