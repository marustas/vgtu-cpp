#include <vector>

int main() {
    std::vector<int> v{ 1, 2, 3, 4, 5 };
    v.insert(v.begin(), 6);//Or use .push_back(6) if no elements in vector
}