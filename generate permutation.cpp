#include <iostream>
using namespace std;

void printp(int n)
{
    if (n <= 0)
        return;
    if (n % 2 == 1)
        cout << n << " ";
    printp(n - 1);
    if (n % 2 == 0)
        cout << n << " ";
}
void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 0)
        {
            cout << "-1" << endl;
        }
        else
        {
            printp(n);
            cout << endl;
        }
    }
}

int main()
{
    solve();
    return 0;
}
