#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            arr.push_back(i + 1);
        }

        int maximum = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (i == j)
                    continue;

                if ((arr[i] & arr[j]) < k && (arr[i] & arr[j]) > maximum)
                {
                    maximum = arr[i] & arr[j];
                }
            }
        }
        cout << maximum << endl;
    }
    return 0;
}
