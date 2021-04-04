#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
typedef long long ll;


int main()
{
    ll n;
    cin >> n;
    ll zeroCount = 0;
    ll div = 5;
    while(div <= n)
    {
        zeroCount += floor(n/div);
        div *= 5;
    }
    cout << zeroCount << endl;
}