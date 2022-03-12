#include <iostream>
#include <vector>
using namespace std;
class Product
{
private:
    int number, quantity, price;
    vector<int> productRecord;

public:
    Product();
    Product(int initNumber, int initQuantity, int initPrice);
    int GetNumber() const;
    int GetQuantity() const;
    int GetPrice() const;
    int GetTotal() const;
    void SetNumber();
    void SetQuantity();
    void SetPrice();
    void printProduct();
};

Product::Product()
{
    number = 0;
    quantity = 0;
    price = 0;
}

Product::Product(int initNumber, int initQuantity, int initPrice)
{
    number = initNumber;
    quantity = initQuantity;
    price = initPrice;
}
void Product::printProduct()
{
    Product pr;
    pr.SetNumber();
    pr.SetQuantity();
    pr.SetPrice();
    cout << "The number is " << pr.GetNumber() << ","
         << "The quantity is " << pr.GetQuantity() << ","
         << "The price is " << pr.GetPrice() << ","
         << "The total price for the product is " << pr.GetTotal() << endl;
}
void Product::SetNumber()
{
    cout << "Enter the number of the product:" << endl;
    cin >> number;
    productRecord.push_back(number);
}
void Product::SetQuantity()
{
    cout << "Enter the quantity of the product:" << endl;
    cin >> quantity;
    productRecord.push_back(quantity);
}
void Product::SetPrice()
{
    cout << "Enter the price of the product:" << endl;
    cin >> price;
    productRecord.push_back(price);
}

int Product::GetNumber() const { return number; }
int Product::GetQuantity() const { return quantity; }
int Product::GetPrice() const { return price; }
int Product::GetTotal() const { return quantity * price; }

int main()
{
    Product product1;
    Product product2;
    Product product3;
    product1.printProduct();
    product2.printProduct();
    product3.printProduct();
}