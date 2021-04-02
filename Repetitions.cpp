#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int output = 0;
    int currCount = 1;
    string code;
    getline(cin, code);
    // cout << code << endl;
    char currLetter = code[0];
    // cout << currLetter << ' ' << currCount << ' ' << output;
    for(int i=1;i<code.length();i++)
    {
        if(code[i] == currLetter)
        {
            currCount++;
        }
        else
        {
            if(currCount > output)
                output = currCount;
            currCount = 1;
            currLetter = code[i];
        }
    }
    if(currCount > output)
        output = currCount;

    cout << output << endl;
}