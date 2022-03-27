#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    int x;
    cout << "Enter your numbers one at a time(end with a non-digit):\n";
    while (cin >> x)
        v.push_back(x);
    for (auto first = v.cbegin(), last = v.cend();
         first != last && first != --last;
         ++first)
    {
        cout << *first + *last << " ";
    }
    cout << endl;
    return 0;
}