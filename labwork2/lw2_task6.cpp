#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
bool palindrome(const vector<int> &);

int main()
{
    int x;
    vector<int> values;
    cout << "Enter your numbers one at a time(end with a non-digit):\n";
    while (cin >> x)
        values.push_back(x);

    for (int v : values)
        cout << v << ' ';

    if (palindrome(values))
        cout << " is a palindrome.\n";
    else
        cout << "is not a palindrome.\n";
}

bool palindrome(const vector<int> &vect)
{
    return equal(vect.begin(), vect.begin() + vect.size() / 2, vect.rbegin());
}