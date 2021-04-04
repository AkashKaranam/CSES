#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
typedef long long ll;

int main()
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        ll row;
        ll col;
        cin >> row;
        cin >> col;
        ll max;
        if(col >= row)
            max = col;
        else
            max = row;
        if(max % 2 == 1)
        {
            ll squareRow;
            ll squareCol;
            squareCol = max;
            squareRow = 1;
            cout << (max * max - abs(squareCol - col) - abs(squareRow - row)) << endl;
        }
        else
        {
            ll squareRow;
            ll squareCol;
            squareCol = 1;
            squareRow = max;
            cout << (max * max - abs(squareCol - col) - abs(squareRow - row)) << endl;
        }


    }


}