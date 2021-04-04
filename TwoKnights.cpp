#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
typedef long long ll;

int main() 
{
    ll n;
    cin >> n;
    ll counter = 1;
    while(counter <= n)
    {
        ll output = counter*counter*counter*counter - 9 * counter * counter + 24 * counter - 16;
        output /= 2;
        cout << output << endl;
        counter++;
    }
}