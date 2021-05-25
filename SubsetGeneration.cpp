#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
vector<int> subset;
int n = 3;


void search(int k) 
{
    // cout << "Calling search with input " << k << endl;
    if(k == n+1) {
        // cout << "THE SIZE OF THIS SUBSET IS " << subset.size();
        // cout << "\n";
        // cout << "THE VALUES IN THIS SUBSET ARE \n";

        for(int i=0;i < subset.size();i++)
        {
            cout << subset.at(i) << ' ';
        }
        cout << "\n";
    }
    else
    {
        // include k in the subset
        subset.push_back(k);
        search(k+1);
        subset.pop_back();
        // don't include k in the subset
        search(k+1);

    }
}

int main()
{
    cout << "The subsets are \n";
    search(1);
}

