#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> vektor;
    int number, valami;

    cin >> number;
    for(int i=0; i<number; i++)
    {
        cin >> valami;
        vektor.push_back(valami);
    }
    for(int i=0; i<vektor.size(); i++)
    {
        cout << vektor[i];
    }

    return 0;
}
