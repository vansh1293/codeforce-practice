#include <iostream>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int c = 0;
    string str;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        if (str == "X++" || str == "++X")
            c++;
        else
            c--;
    }
    cout << c << endl;
}

int main()
{
    solve();
    return 0;
}
