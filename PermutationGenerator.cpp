#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;
#define length 3
vector<int> permutation;

const vector<int> primes({2,3,5});
// not using the zeroth index of chosen
bool chosen[length + 1];

void search() {
    if(permutation.size() == primes.size()) {
        cout << "THE OUTPUTTED PERMUTATION IS ";
        for(int i=0; i < permutation.size(); i++)
            cout << permutation.at(i) << ' ';
        cout << '\n';
    }
    else
    {
        for(int i=1; i <= primes.size(); i++) {
            if(chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(primes.at(i-1));
            // printPermutation();
            search();
            chosen[i] = false;
            permutation.pop_back();
            // printPermutation();
        }
    }
}

int main()
{
    search();
}