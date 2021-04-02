#include <algorithm>
#include <vector>
#include <string>
#include <iostream>

using namespace std;
vector<int> permutation;

bool checkBeautiful(vector<int> permutation)
{
    for(int i=0;i<permutation.size()-1;i++)
    {
        if(abs(permutation[i] - permutation[i+1]) == 1)
            return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    if(n == 2 || n == 3)
        cout << "NO SOLUTION" << endl;
    else
    {
        int smallestEven = 2;
        int smallestOdd = 1;
        for(int i=smallestEven; i <= n; i+=2)
        {
            cout << i << ' ';
        }
        for(int i=smallestOdd; i <= n; i+=2)
        {
            cout << i << ' ';
        }
        cout << endl;
    }

    
}

