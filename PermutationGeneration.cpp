#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

#define n 3
using namespace std;
vector<int> permutation;
// not using the zero index of chosen
bool chosen[n+1];

// for understanding how the permutation is built
// void printPermutation() {
//     cout << "THE PERMUTATION IS NOW ";
//     for(int i=0; i < permutation.size(); i++)
//         cout << permutation.at(i) << ' ';
//     cout << '\n';
// }

void search() {
    if(permutation.size() == n) {
        cout << "THE OUTPUTTED PERMUTATION IS ";
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
