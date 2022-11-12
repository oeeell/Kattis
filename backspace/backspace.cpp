#include <iostream>
#include <vector>

using namespace std;

int main()
{

    string sample;

    cin >> sample;

    vector<char> sampleInput;

    for (int i = 0; i < sample.size(); i++)
    {
        if (sample[i] == '<')
        {
            sampleInput.pop_back();
        }
        else
        {

            sampleInput.push_back(sample[i]);
        }
    }

    for (int i = 0; i < sampleInput.size(); i++)
    {
        cout << sampleInput[i];
    }
    cout << endl;
}

/*




i = 0
a   <   b   c   <

0   1   2   3   4

i = 1
a   b   c   <

0   1   2   3

i = 0
b   c   <

0   1   2


i = 1
b   c   <

0   1   2


i = 2
b

0

i = 0

*/