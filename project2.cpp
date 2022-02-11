#include <iostream>
using namespace std;
class Oven
{
private://inaccessible in main
    void TurnOnHeatingElement();// member function
    void TurnOffHeatingElement();//member function

public:// accessible in main
    void Bake(int Temperature);//member function
};
void Oven::TurnOnHeatingElement()
{
    cout << "Heating element is now ON! Be careful!" << endl;
}
void Oven::TurnOffHeatingElement()
{
    cout << "Heating element is now off. Relax!" << endl;
}
void Oven::Bake(int Temperature)
{
    TurnOnHeatingElement();
    cout << "Baking!" << endl;
    TurnOffHeatingElement();
}
int main()
{
    Oven fred;
    fred.Bake(875);
    return 0;
}