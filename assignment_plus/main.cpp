#include <iostream>
#include <math.h>

using namespace std;

int szomszed_nullazas(int resztvevok_szama, long long szomszed[]);
int leult_nullazas(int resztvevok_szama, int leult[]);
void kiirVoltSzomszedE(int resztvevok_szama, long long *szomszed);
bool kiirLeultE(int resztvevok_szama, int *leult);
bool voltSzomszedE(long long szomszed, int uj_szomszed);
bool leultE(int leult[], int poz, int leulo);
void kereses(int resztvevok_szama,long long szomszed[], int leult[], int i, int j);
void ulesi_sorrend(int resztvevok_szama, long long *szomszed, int *leult);

int main()
{
    int resztvevok_szama;
    cin >> resztvevok_szama;
    long long szomszed[resztvevok_szama];
    int leult[resztvevok_szama];
    szomszed_nullazas(resztvevok_szama, szomszed);
    int i=0;
    while(i<resztvevok_szama/2)
    {
        cout<< "i erteke "<< i<< endl;
        leult_nullazas(resztvevok_szama, leult);
        kereses(resztvevok_szama, szomszed, leult, 0,0);
        ulesi_sorrend(resztvevok_szama, szomszed, leult);
        kiirLeultE(resztvevok_szama, leult);
            kiirVoltSzomszedE(resztvevok_szama, szomszed);
        i++;
    }
    kiirVoltSzomszedE(resztvevok_szama, szomszed);
    kiirLeultE(resztvevok_szama, leult);

    return 0;
}

void kereses(int resztvevok_szama,long long szomszed[], int leult[],int i,int j)
{
    while(i<resztvevok_szama)
    {
        while(j<resztvevok_szama)
        {

            if(!leultE(leult, i, j))
            {
                if(!voltSzomszedE(szomszed[i], j))
                {
                    leult[i]=j;
                    j=resztvevok_szama;
                    cout << "probalkozas " << endl;
                    kiirLeultE(resztvevok_szama, leult);
                }
            }
            j++;
        }
        if(leult[i]==-1)
        {
            kereses(resztvevok_szama, szomszed, leult, i-1, leult[i-1]+1);
        }
        j=0;
        i++;
    }
}

int szomszed_nullazas(int resztvevok_szama, long long szomszed[])
{
    for(int i=0; i<resztvevok_szama; i++)
    {
        szomszed[i]=pow(2,i);
    }
}
int leult_nullazas(int resztvevok_szama, int leult[])
{
    for(int i=0; i<resztvevok_szama; i++)
    {
        leult[i]=-1;
    }
}

bool voltSzomszedE(long long szomszed, int uj_szomszed)
{
    bool voltSzomszed=false;
    int seged_szomszed=szomszed;
    int rownum=0;
    while(!voltSzomszed && seged_szomszed>0)
    {
        if(seged_szomszed%2>0)
        {
            if(pow(2,rownum)==pow(2,uj_szomszed))
            {
                voltSzomszed=true;
            }
        }
        seged_szomszed=seged_szomszed/2;
        rownum++;
    }
    return voltSzomszed;
}

bool leultE(int leult[], int poz, int leulo)
{
    bool mar_leult_e=false;
    for(int i=0; i<=poz; i++)
    {
        if(leulo==leult[i])
        {
            mar_leult_e=true;
        }
    }
    return mar_leult_e;
}
void ulesi_sorrend(int resztvevok_szama, long long *szomszed, int *leult)
{
    for(int i=0; i<resztvevok_szama; i++)
    {
        szomszed[i]+=pow(2,leult[i]);
        szomszed[leult[i]]+=pow(2,i);
    }
}

void kiirVoltSzomszedE(int resztvevok_szama, long long *szomszed)
{
    for(int i=0; i<resztvevok_szama; i++)
    {
        cout << szomszed[i]<< " ";
    }
    cout << endl;
}

bool kiirLeultE(int resztvevok_szama, int *leult)
{
    for(int i=0; i<resztvevok_szama; i++)
    {
        cout << leult[i]<< " ";
    }
    cout << endl;
}
