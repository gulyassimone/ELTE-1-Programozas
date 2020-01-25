#include <iostream>

using namespace std;


//matrix transponaltja

int main()
{
    int m, n;
    cin >> m;
    cin >> n;

    int t[m][n], k[n][m];
    //bemenet erteket kap
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            t[i][j]=i;
            cout << t[i][j];

        }
        cout << endl;
    }
    //kimenet erteket kap
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
                k[j][i]=t[i][j];
        }
    }
    //kiir
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cout << k[i][j];
        }
        cout << endl;
    }

    return 0;
}
