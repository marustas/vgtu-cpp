#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s("Hello, this beutiful, (colourful) world!..!.");
    for (auto &c : s)
        if (!ispunct(c))
        {
            cout << c;
        }
}
