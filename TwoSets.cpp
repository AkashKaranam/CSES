#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> firstSet;
    vector<int> secondSet;

    if(n % 4 == 0)
    {
        for(int i=1;i<=n;i+=4)
        {
            firstSet.push_back(i);
            secondSet.push_back(i+1);
            secondSet.push_back(i+2);
            firstSet.push_back(i+3);
        }
        cout << "YES" << endl;
        cout << firstSet.size() << endl;
        for(int i=0;i<firstSet.size();i++)
        {
            cout << firstSet[i] << ' ';
        }
        cout << endl;
        cout << secondSet.size() << endl;
        for(int i=0;i<secondSet.size();i++)
        {
            cout << secondSet[i] << ' ';
        }
        cout << endl;
    }
    else if(n % 4 == 1)
    {
        cout << "NO" << endl;
    }
    else if(n % 4 == 2)
        cout << "NO" << endl;
    else
    {
        firstSet.push_back(1);
        firstSet.push_back(2);
        secondSet.push_back(3);
        for(int i=4;i<=n;i+=4)
        {
            firstSet.push_back(i);
            secondSet.push_back(i+1);
            secondSet.push_back(i+2);
            firstSet.push_back(i+3);
        }
        cout << "YES" << endl;
        cout << firstSet.size() << endl;
        for(int i=0;i<firstSet.size();i++)
        {
            cout << firstSet[i] << ' ';
        }
        cout << endl;
        cout << secondSet.size() << endl;
        for(int i=0;i<secondSet.size();i++)
        {
            cout << secondSet[i] << ' ';
        }
        cout << endl;
    }
}