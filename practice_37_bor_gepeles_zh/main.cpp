#include <iostream>
#include <vector>

using namespace std;

void pinceszetFeladatA(int evek_szama, int mennyiseg[]);
void pinceszetFeladatB(int evek_szama, int K, int mennyiseg[]);
void pinceszetFeladatC(int evek_szama,  int mennyiseg[]);


int main()
{
    int evek_szama,K;
    cin >> evek_szama >> K ;
    int mennyiseg[evek_szama], ar[evek_szama];
    for(int i=0; i<evek_szama; i++)
    {
        cin >> mennyiseg[i] >> ar[i];
    }
    pinceszetFeladatA(evek_szama, mennyiseg);
    pinceszetFeladatB(evek_szama, K, mennyiseg);
    pinceszetFeladatC(evek_szama, mennyiseg);
    return 0;
}
void pinceszetFeladatA(int evek_szama, int mennyiseg[])
{
    //a feladata
    int db=0;
    vector<int> tobb_mint_2000;
    for(int i=0; i<evek_szama; i++)
    {
        if(mennyiseg[i]>2000)
        {
            db++;
            tobb_mint_2000.push_back(i+1);
        }
    }
    cout << db << " ";
    for(int i=0; i<db; i++)
    {
        cout << tobb_mint_2000[i] << " ";
    }
    cout << endl;
}
void pinceszetFeladatB(int evek_szama, int K, int mennyiseg[])
{
    //a feladata
    int db=0;
    int i=0;
    while( i<evek_szama && db<K )
    {
        if(mennyiseg[i]>mennyiseg[i-1])
        {
            db++;
        }
        else
        {
            db=0;
        }
        i++;
    }
    if(db==K)
    {
        cout << "IGEN" <<endl;
    }
    else
    {
        cout << "NEM" <<endl;
    }
}
void pinceszetFeladatC(int evek_szama,  int mennyiseg[])
{
    //c feladata
    int db=0;
    vector<int> tobb_mint_korabbi;
    for(int i=1; i<evek_szama; i++)
    {
        int j=0;
        while( j<i && mennyiseg[i]>mennyiseg[j] )
        {
            j++;
        }
        if(j==i)
        {
            db++;
            tobb_mint_korabbi.push_back(i+1);
        }
}
cout << db << " ";
for(int i=0; i<db; i++)
    {
        cout << tobb_mint_korabbi[i] << " ";
    }
    cout << endl;
}
