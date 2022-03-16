#include <iostream>
#include <array>
using namespace std;
#define BOUND 93
int main()
{
    array<unsigned long long, BOUND> fib{BOUND};
    fib[0] = fib[1] = 1UL;
    for (size_t i = 2; i < BOUND; ++i)
        fib[i] = fib[i - 1] + fib[i - 2];

    cout << "The first " << BOUND << " Fibonacci numbers are:\n";
    for (auto number : fib)
    {
        cout << number << endl;
    }
}