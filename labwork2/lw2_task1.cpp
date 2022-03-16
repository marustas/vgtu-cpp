#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main()
{
    cout << "Enter the upper bound: ";
    unsigned bound;
    cin >> bound;

    std::vector<unsigned> values;
    for (unsigned i = 1; i <= bound; ++i)
        values.push_back(i);

    size_t count;
    size_t perline = 10;
    for (auto value : values)
    {
        if (value % 7 == 0 || value % 13 == 0)
            continue;
        cout << setw(6) << value;
        if (++count % perline == 0)
            cout << "\n";
    }
    cout << endl;
}