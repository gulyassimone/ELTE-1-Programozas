#include <iostream>

// eredmeny 100%
using namespace std;

int main()
{
    int fal_hossz, fal_mag, ember_szam, BFsor, BFoszlop, JAsor, JAoszlop, Z_OSSZEG, P_OSSZEG;
    char festek_szin;
    cin >> fal_hossz>> fal_mag>> ember_szam;
    string fal[fal_mag][fal_hossz];
    Z_OSSZEG=0;
    P_OSSZEG=0;

    for(int i=0; i<ember_szam; i++)
    {

        cin >> festek_szin >> BFsor >> BFoszlop >> JAsor >> JAoszlop;
        if(festek_szin=='P')
        {
            int j=BFsor-1;
            while (j <= JAsor-1)
            {
                int k=BFoszlop-1;
                while (k <= JAoszlop-1)
                {
                    if(fal[j][k]=="Z")
                    {
                        fal[j][k]="SP";
                    }
                    else if(fal[j][k]=="SP")
                    {
                        fal[j][k]="P";
                    }
                    else if (fal[j][k]=="SZ")
                    {
                        fal[j][k]="SP";
                    }
                    else
                    {
                        fal[j][k]="P";
                    }
                    k++;
                }
                j++;
            }
        }
        else
        {
            int j=BFsor-1;
            while (j <= JAsor-1)
            {
                int k=BFoszlop-1;
                while (k <= JAoszlop-1)
                {
                    if(fal[j][k]=="P")
                    {
                        fal[j][k]="SZ";
                    }
                    else if(fal[j][k]=="SP")
                    {
                        fal[j][k]="SZ";
                    }
                    else if (fal[j][k]=="SZ")
                    {
                        fal[j][k]="Z";
                    }
                    else
                    {
                        fal[j][k]="Z";
                    }
                    k++;
                }
                j++;
            }
        }
    }
    for (int i=0; i<fal_mag; i++)
    {
        for(int j=0; j<fal_hossz; j++)
        {

            if (fal[i][j]=="Z")
            {
                Z_OSSZEG++;
            }
            else if (fal[i][j]=="P")
            {
                P_OSSZEG++;
            }
        }
    }
    cout <<P_OSSZEG << " " <<Z_OSSZEG ;
    return 0;
}
