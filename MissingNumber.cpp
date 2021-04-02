#include <vector>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long sum = 0;
    long long expectedSum = n * (n+1) / 2;
    vector<long long> vals;
    
    for(int i=0;i<n-1;i++)
    {
        long long val;
        cin >> val;
        vals.push_back(val);
        
    }

    for(int i=0;i<vals.size();i++)
    {
        sum += vals.at(i);
    }
    // cout << expectedSum << " " << sum;
    cout << (expectedSum - sum) << endl;
}