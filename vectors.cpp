#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v;
    // Add numbers to the vector
    v.push_back(2);
    v.push_back(2524);
    v.push_back(23);
    for (int i = 0; i < 10; i++)
        v.push_back(i * 10);

    // Print out the contents of the vector
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";

    return 0;
}
