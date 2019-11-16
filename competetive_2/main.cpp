#include <iostream>
#include <stdlib.h>

using namespace std;
// eredmeny 15%
int main()
{
    int varos, allas, jelentkezo, max_tav;
    cin >> varos >> allas >> jelentkezo;

    int tavolsag[varos];
    int varos_allas[allas];
    int jelentkezo_lakhely[jelentkezo];

    int db=0;

    for (int i=0; i<varos; i++)
    {
        cin >> tavolsag[i];
    }
    for (int i=0; i<allas; i++)
    {
        cin >> varos_allas[i];
    }
    for (int i=0; i<jelentkezo; i++)
    {
        cin >> jelentkezo_lakhely[i];
    }
    cin >> max_tav;

    for (int i=0; i< allas ; i++)
    {
        int j =0;
        while ( j< jelentkezo && abs(tavolsag[varos_allas[i]-1]-tavolsag[jelentkezo_lakhely[j]-1])>4)
        {
                j++;
        }
        if(j<jelentkezo)
        {

            db++;
        }
    }
    cout << db;

    return 0;
}
