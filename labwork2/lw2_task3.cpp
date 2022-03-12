#include <iostream>
#include <array>
using namespace std;
int main()
{
    const size_t n{93};
    array<unsigned long long, n> fib{n};
    fib[0] = fib[1] = 1UL;
    for (size_t i{2}; i < n; ++i)
        fib[i] = fib[i - 1] + fib[i - 2];

    cout << "The first " << n << " Fibonacci numbers are:\n";
    for (auto number : fib)
    {
        cout << number << endl;
    }
}