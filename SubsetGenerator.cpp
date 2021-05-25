#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
vector<int> subset;
const vector<int> primes({2,3,5});
void search(int k)
{
    if(k == primes.size() + 1)
    {
        for(int i=0;i<subset.size();i++)
        {
            cout << subset.at(i) << ' ';
        }
        cout << "\n";
    }
    else
    {
        // include the kth element in the subset
        subset.push_back(primes.at(k-1));
        search(k+1);
        // don't inclue the kth element in the subset
        subset.pop_back();
        search(k+1);
    }
}
int main()
{
    cout << "The subsets are \n";
    search(1);
}

