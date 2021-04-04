#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
typedef long long ll;
#define mod 1000000007

int main()
{
    int n;
    cin >> n;
    ll numSubsets = 1;
    for(int i=1; i<=n;i++)
    {
        numSubsets*=2;
        numSubsets%=mod;
    }
    cout << numSubsets << endl;


    
}