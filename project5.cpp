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
    int getFeet() { return feet; }
    int getYards() { return yards; }
    int getMiles() { return miles; }

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
    Distance d1;
    Distance d2;
    d1.convertFeet(6002);
    d2.convertYards(5230);
    cout << "6002 ft = " << formatted(d1) << endl;
    cout << "5230 yd = " << formatted(d2) << endl;

    cout << "(" << formatted(d1) << ")";
    d1.addFeet(10001);
    cout << " + 10001 ft = " << formatted(d1) << endl;

    cout << "(" << formatted(d1) << ")";
    d1.addYards(5000);
    cout << " + 5000 yd = " << formatted(d1) << endl;

    cout << "(" << formatted(d1) << ")";
    d1.addMiles(10);
    cout << " + 10 miles = " << formatted(d1) << endl;
}
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