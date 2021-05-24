#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;


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
        int diff = 2*a-b;
        int backdiff = 2*b-a;
        if(diff % 3 == 0 && backdiff % 3 == 0 && diff >=0 && backdiff >= 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
        
    }
}

