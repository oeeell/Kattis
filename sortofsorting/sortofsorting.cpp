#include <bits/stdc++.h>

using namespace std;

int main()
{

    int query;
    while (cin >> query)
    {
        if (query == 0)
            exit(0);

        vector<string> names;
        for (int i = 0; i < query; i++)
        {
            string temp;
            cin >> temp;
            names.push_back(temp);
        }
        int n = names.size();
        // sort(names.begin(), names.end());

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (names[j][0] >= names[j + 1][0])
                {
                    swap(names[j], names[j + 1]);
                }
                if (names[j][0] == names[j + 1][0] && names[j][1] >= names[j + 1][1])
                {
                    swap(names[j + 1], names[j]);
                }
            }
        }
        // sort(names.begin(), names.end());

        for (string acc : names)
        {
            cout << acc << endl;
        }
    }

    return 0;
}