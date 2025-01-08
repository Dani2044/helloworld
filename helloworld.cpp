#include <iostream>
#include <vector>
#include <string>
#include "helloworld.h"

using namespace std;

/**
 * @brief Calculate the length of the message and print it
 */
int main()
{
    vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    for (const string& word : msg)
    {
        cout << word << " ";
    }
    cout << endl << calculateLength(msg);
}