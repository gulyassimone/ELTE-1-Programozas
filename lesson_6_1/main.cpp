#include <iostream>

using namespace std;

int osztoosszeg(int szam)
{
    int osszeg=0;
    for(int i=1; i<=szam/2; i++)
    {
        if(szam%i==0)
        {
            osszeg+=i;
        }
    }
    return osszeg;

}
bool eldontes(int szam)
{
    return osztoosszeg(szam)==szam;

}
bool baratsagos(int szam1, int szam2)
{
    return (osztoosszeg(szam1)==szam2&&osztoosszeg(szam2)==szam1);
}
// 13-as feladat!!!!!
int main()
{
    int m;
    cin >>m;
    for (int i=0; i<m; i++)
    {
        for (int j=1; j<m; j++)
        {
            if(baratsagos(i, j))
            {
                cout << i << " " << j << endl;
            }
        }

    }
    return 0;
}
