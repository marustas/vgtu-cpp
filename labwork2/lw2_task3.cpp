#include <iostream>
#include <vector>
using namespace std;
#define BOUND 93
int main()
{
    vector<unsigned long long> fib(BOUND);
    fib[0] = fib[1] = 1;
    cout << "The first " << BOUND << " Fibonacci numbers are:\n";
    cout << fib[0] << "\n"
         << fib[1] << "\n";
    for (int i = 2; i < BOUND; ++i)
    {
        fib[i] = i;
        fib[i] = fib[i - 1] + fib[i - 2];
        cout << fib[i] << endl;
    }
}