#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main()
{

    string input;

    cin >> input;

    for (int i = 0; i < input.size(); i++)
    {
        if (isupper(input[i]))
        {
            cout << input[i];
        }
    }

    cout << endl;

    return 0;
}

/*

no need to be confused here, after reading
all of the constraints, you should be aware
about the input type. first letter of every
word WILL BE a capital letter. thus, you just
need to go for a linear search and print every
character that is a capital letter.

*/