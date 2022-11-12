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
readme.md

by using c++ vectors library, you can save more time building the code.

implementation is by using stack.
you need to input the string first and then 
use the stack algorithm to determine what character
get pop-ed or not.

any further questions do not hesitate to ask me :) 
*/