#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b;

    while (cin >> a, cin >> b)
    {
        if (a == 0 && b == 0)
            exit(0);

        int arr[a + b];
        for (int i = 0; i < a + b; i++)
        {
            cin >> arr[i];
        }
        int n = sizeof(arr) / sizeof(arr[0]);

        sort(arr, arr + n);

        int count = 0;

        for (int i = 0; i < a + b; i++)
        {
            if (arr[i] == arr[i + 1])
                count++;
        }

        cout << count << endl;
    }

    return 0;
}
