#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool isSorted = true;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < arr[i - 1])
            {
                isSorted = false;
                break;
            }
        }

        if (!isSorted && k == 1)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        cout << endl;
    }
    return 0;
}
