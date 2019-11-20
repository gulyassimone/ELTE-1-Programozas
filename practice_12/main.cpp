#include <iostream>

using namespace std;

int main()
{
    int tanulok_szama, sportag_szama, nevezesek_szama,tanulo,
        *tanulo_sorszama, *sportag, X;


    cin >> tanulok_szama >> sportag_szama >> nevezesek_szama;
    tanulo_sorszama = new int[nevezesek_szama];
    sportag = new int[nevezesek_szama];

    for(int i=0; i<nevezesek_szama; i++)
    {
        cin >> tanulo_sorszama[i] >> sportag[i];
    }
    cin >> tanulo;

    int db=0;
    for(int i = 0; i<nevezesek_szama; i++)
    {
        if(tanulo==tanulo_sorszama[i])
        {
            db++;
        }

    }

    cout << "Nevezes: " << db << endl;
    int tansor=-1;


    for(int i = 0; i<nevezesek_szama; i++)
    {
        if(tanulo_sorszama[i]<tansor|| tansor==-1)
        {
            int j=0;
            int db_2=0;
            while(j<nevezesek_szama && db_2<=1)
            {
                j++;
                if(tanulo_sorszama[i]==tanulo_sorszama[j] && sportag[i]==sportag[j])
                {
                    db_2++;
                }
            }
            if(j<nevezesek_szama)
            {
                tansor=tanulo_sorszama[i];
            }
        }
    }
    cout << tansor;
    return 0;

}
