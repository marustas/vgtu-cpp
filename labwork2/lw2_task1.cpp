#include <iostream>
#include <vector>
using namespace std;

// Defining the rows and columns of
// vector of vectors
#define COL 10

int main()
{
    int x;
    cout << "Enter the upper bound:" << endl;
    cin >> x;
    int row = x / 10;
    // Initializing the vector of vectors
    vector<vector<int> > vec;

    // Elements to insert in column
    int num = 1;

    // Inserting elements into vector
    for (int i = 0; i <= row; i++)
    {
        // Vector to store column elements
        vector<int> v1;
        for (int j = 1; j <= 10; j++)
        {
            v1.push_back(num);
            num += 1;
        }
        // Pushing back above 1D vector
        // to create the 2D vector
        vec.push_back(v1);
    }
    // Displaying the 2D vector
    for (int i = 0; i < vec.size(); i++)
    {
            for (int j = 0; j < vec[i].size(); j++)
                cout << vec[i][j] << " ";
        cout << endl;
    }
    return 0;
}
