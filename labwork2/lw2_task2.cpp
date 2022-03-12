#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

int main()
{
    vector<int> number;
    vector<int> quantity;
    vector<int> price;

    while (true)
    {
        cout << "Enter a record(product number, quantity, unit cost separated by spaces): ";
        int n, q, p;
        cin >> n >> q >> p;

        number.push_back(n);
        quantity.push_back(q);
        price.push_back(p);

        cout << "Do you want to enter another record (y or n): ";
        char answer;
        cin >> answer;
        if (answer == 'n')
            break;
    }

    int total_cost = 0;
    for (int i = 0; i < number.size(); ++i)
    {
        auto cost = quantity[i] * price[i];
        total_cost += cost;
        cout << "Number: " << number[i] << ", "
             << "Quantity: " << quantity[i] << ", "
             << "Price: " << price[i] << ", "
             << "Price of the product: " << cost << endl;
    }
    cout << "Total cost of the products:  " << total_cost << endl;
}