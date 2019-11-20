#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector <int> vektor;
    int number, valami;

    cin >> number;
    for(int i=1; i<=number; i++)
    {
        cin >> valami;
        vektor.push_back(number);
    }
    for(int i=1; i<=number; i++)
    {
        cout << vektor[i];
    }

    return 0;
}
