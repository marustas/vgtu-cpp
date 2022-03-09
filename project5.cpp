#include <iostream>
using namespace std;

struct Distance
{
    int feet, yards, miles;
};
Distance ConvertYards(int yards);
Distance ConvertFeet(int feet);
void PrintDistance(Distance distance);
int main()
{
    Distance d1;
    Distance d2;
    int x, y;
    cout << "Enter the value in yards: " << endl;
    cin >> x;
    cout << "Enter the value in feet: " << endl;
    cin >> y;
    d1 = ConvertYards(x);
    PrintDistance(d1);

    d2 = ConvertFeet(y);
    PrintDistance(d2);
    return 0;
}

Distance ConvertYards(int yards)
{
    Distance d;
    d.feet = 0;
    d.yards = yards % 1760;
    d.miles = yards / 1760;
    return d;
}

Distance ConvertFeet(int feet)
{
    Distance d;
    d.miles = feet / 5280;
    int yrds = feet - d.miles * 5280;
    d.yards = yrds / 3;
    d.feet = feet - d.miles * 5280 - d.yards * 3;
    return d;
}

void PrintDistance(Distance dist)
{
    cout << "Feet: " << dist.feet << endl;
    cout << "Yards: " << dist.yards << endl;
    cout << "Miles: " << dist.miles << endl;
}

void Add()
