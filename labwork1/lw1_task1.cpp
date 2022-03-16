#include <iostream>
#include <string>
using namespace std;

class Distance
{
private:
    int feet, yards, miles;

public:
    Distance()
    {
        miles = 0;
        yards = 0;
        feet = 0;
    }
    int getFeet();
    int getYards();
    int getMiles();

    void addMiles(int m);
    void addYards(int y);
    void addFeet(int f);
    void convertFeet(int f);
    void convertYards(int y);
};

string formatted(Distance t)
{
    return to_string(t.getFeet()) + " ft " +
           to_string(t.getYards()) + " yds " +
           to_string(t.getMiles()) + " miles";
}

int main()
{
    int x, y, a, b, z;
    Distance d1;
    Distance d2;
    cout << "Enter the amount of feet to convert: ";
    cin >> x;
    cout << "Enter the amount of yards to convert: ";
    cin >> y;
    d1.convertFeet(x);
    d2.convertYards(y);
    cout << x << " ft = " << formatted(d1) << endl;
    cout << y << " yd = " << formatted(d2) << endl;

    cout << "Enter the amount of feet to add:";
    cin >> a;
    d1.addFeet(a);
    cout << "The result of addding " << a << " ft = " << formatted(d1) << endl;

    cout << "Enter the amount of yards to add:";
    cin >> b;
    d1.addYards(b);
    cout << "The result of adding " << b << " yd = " << formatted(d1) << endl;

    cout << "Enter the amount of miles to add:";
    cin >> z;
    d1.addMiles(z);
    cout << "The result of adding " << z << " miles = " << formatted(d1) << endl;
}
int Distance::getFeet() { return feet; }
int Distance::getYards() { return yards; }
int Distance::getMiles() { return miles; }

void Distance::addMiles(int m)
{
    miles += m;
}

void Distance::addYards(int y)
{
    yards += y;
    Distance temp;
    temp.convertYards(yards);
    yards = temp.getYards();
    miles += temp.getMiles();
}

void Distance::addFeet(int f)
{
    feet += f;
    Distance temp;
    temp.convertFeet(feet);
    feet = temp.getFeet();
    addYards(temp.getYards());
    miles += temp.getMiles();
}

void Distance::convertFeet(int f)
{
    miles = f / 5280;
    yards = (f % 5280) / 3;
    feet = (f % 5280) % 3;
}

void Distance::convertYards(int y)
{
    miles = y / 1760;
    yards = y % 1760;
    feet = 0;
}