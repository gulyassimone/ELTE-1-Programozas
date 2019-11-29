#include <iostream>

using namespace std;




int main()
{
    int number_of_property;
    cin >> number_of_property;
    int piece=1;
    int size_of_property[number_of_property];
    int price_of_property[number_of_property];

    for(int i=0; i<number_of_property;i++)
    {
        cin>> size_of_property[i]>>price_of_property[i];
    }


    for(int i=1; i<number_of_property;i++)
    {
        int j=0;
        while(j<i && size_of_property[i]!=size_of_property[j] )
        {
            j++;
        }
        if(j==i)
        {
            piece++;
        }
    }
    cout << piece;
    return 0;
}
