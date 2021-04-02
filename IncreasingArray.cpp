#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

typedef long long ll;
int main()
{
    ll n;
    cin >> n;
    vector<int> vals;
    ll moves = 0;
    for(int i=0;i<n;i++)
    {
        long long val;
        cin >> val;
        vals.push_back(val);
    }

    for(int i=1;i<vals.size();i++)
    {
        if(vals.at(i) < vals.at(i-1))
        {
            moves += vals.at(i-1) - vals.at(i);
            vals[i] = vals[i-1];
        }
    }
    cout << moves << endl;

}