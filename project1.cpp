#include <iostream>
using namespace std;
int main()
{ // Simple cin cout
    string name;
    cout << "Enter your name" << endl; // prints what is written between <<
    cin >> name;                       // Stores what you type in console into a variable
    cout << "Your name is " << name << endl;

    // A simple While loop
    int i;
    cout << "Enter yout integer value:" << endl;
    cin >> i;
    while (i >= 5)
    {
        cout << "Your integer indeed is more or equal to 5" << endl;
        cout << "Enter your integer value:" << endl;
        cin >> i;
        cout << "Your integer value is " << i << endl;
    }
    cout << "Your integer isn't more or equal to 5" << endl;

    // A simple For loop
    int start, end;
    cout << "Enter the starting integer: " << endl;
    cin >> start;
    cout << "Enter the ending integer: " << endl;
    cin >> end;
    int x = 0;
    for (int i = start; i <= end; i++)
    {
        x += i;
    }
    cout << x << endl;

    // A simple Nested loop
    int y, z;
    for (z = 1; z <= 10; z++)
    {
        cout << "Products of " << z << endl;
        for (y = 1; y <= 10; y++)
        {
            cout << z * y << endl;
        }
        cout << endl;
    }

    // Meddling with strings
    string words = "Something interesting and bizarre";
    cout << words << endl;
    words.insert(10, "seriously ");
    cout << words << endl;
    words.erase(19, 16); // erase 16 characters starting after the 19th character
    cout << words << endl;
    words.replace(4, 5, "body"); // relace 5 characters starting after the 4th character
    cout << words << endl;
    return 0;
}