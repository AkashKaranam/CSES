#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

#define n 3
using namespace std;
vector<int> permutation;
bool chosen[n+1];

void search() {
    if(permutation.size() == n) {
        for(int i=0; i < permutation.size(); i++)
            cout << permutation.at(i) << ' ';
        cout << '\n';
    }
    else
    {
        for(int i=1; i <= n; i++) {
            if(chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(i);
            search();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}

int main()
{
    search();
}
