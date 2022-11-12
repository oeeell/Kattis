#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main()
{

    string cmd;
    int table, query;

    int idx;
    int restart_value;

    cin >> table, query;
    int array[table];

    for (int i = 0; i < query; i++)
    {
        cin >> cmd;
        if (cmd == "SET")
        {

            int idx, value;
            cin >> idx, value;
            array[idx] = value;
        }
        else if (cmd == "PRINT")
        {
            cout << array[idx] << endl;
        }
        else
        {

            for (int j = 0; j < table; j++)
            {
                int new_value;
                cin >> new_value;

                array[j] = new_value;
            }
        }
    }

    return 0;
}