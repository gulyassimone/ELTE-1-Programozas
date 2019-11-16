#include <iostream>
#include <vector>
using namespace std;

// eredmeny 75%
int main()
{
    int autos_szam,ferohely;
    cin >> autos_szam;
    char autos_uticel[autos_szam];

    for(int i=0; i<autos_szam; i++)
    {
        cin >> autos_uticel[i];
    }

    int utas_szam;
    cin >> utas_szam;
    std :: vector<char>  utas_uticel;

    char temp_char;
    for(int i=0; i<utas_szam; i++)
    {
        cin >> temp_char;
        utas_uticel.push_back(temp_char);
    }


    ferohely=0;
    for (int i= 0; i<autos_szam ; i++)
    {
        int egy_auto_ferohely=0;
        int j= 0;
        while (j<utas_uticel.size() && egy_auto_ferohely<3 )
        {
            if(autos_uticel[i] == utas_uticel[j])
            {
                egy_auto_ferohely++;
                ferohely++;
                utas_uticel.erase(utas_uticel.begin() + j);
            }
            else
            {
                j++;
            }
        }
    }
    cout << ferohely;
}
