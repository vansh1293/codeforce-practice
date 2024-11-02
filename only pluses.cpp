#include <iostream>
#include <algorithm>
using namespace std;

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[3];
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < 5; i++)
        {
            sort(arr, arr + 3);
            arr[0] = arr[0] + 1;
        }
        cout << arr[0] * arr[1] * arr[2] << endl;
    }
}

int main()
{

    solve();
    return 0;
}
