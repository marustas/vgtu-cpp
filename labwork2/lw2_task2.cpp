#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

class Record
{
public:
    Record();
    int number, quantity, price;
};
class Product
{
public:
    vector<Record> productRecord;
};

Record::Record()
{
    number = 0;
    quantity = 0;
    price = 0;
}

int main()
{
    Record c;
    Product p;
    while (true)
    {

        cout << "Enter a record(product number, quantity, unit cost separated by spaces): ";
        cin >> c.number >> c.quantity >> c.price;

        p.productRecord.push_back(c);

        cout << "Do you want to enter another record (y or n): ";
        char answer;
        cin >> answer;
        if (answer == 'n')
            break;
    }

    int total_cost = 0;
    for (int i = 0; i < p.productRecord.size(); ++i)
    {
        auto cost = p.productRecord[i].quantity * p.productRecord[i].price;
        total_cost += cost;
        cout << "Number: " << p.productRecord[i].number << ", "
             << "Quantity: " << p.productRecord[i].quantity << ", "
             << "Price: " << p.productRecord[i].price << ", "
             << "Price of the product: " << cost << endl;
    }
    cout << "Total cost of the products:  " << total_cost << endl;
}