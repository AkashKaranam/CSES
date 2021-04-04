#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;

bool recurse(int a, int b)
{
    if(a == 0 && b == 0)
        return true;
    else if(a < 0 || b < 0)
        return false;
    else
        return recurse(a-2,b-1) || recurse(a-1,b-2);
}

int main()
{
    int t;
    cin >> t;
    int a;
    int b;
    for(int i=0;i<t;i++)
    {
        cin >> a;
        cin >> b;
        if(recurse(a,b))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }
}

