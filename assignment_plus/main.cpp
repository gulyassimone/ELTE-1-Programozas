#include <iostream>
#include <math.h>

using namespace std;

void leult_nullazas(int resztvevok_szama, int leult[]);
void szomszed_nullazas(int resztvevok_szama, int szomszed[]);

bool leultE(int leult[], int poz, int leulo);
void kereses(int resztvevok_szama,int szomszed[], int leult[], int i, int j, int db);
void ulesi_sorrend(int resztvevok_szama, int *szomszed, int *leult);
void kiirVoltSzomszedE(int resztvevok_szama, int *szomszed);
void kiirLeultE(int resztvevok_szama, int *leult);
bool OsszesSzomszedMegvan(int resztvevok_szama, int szomszed[]);

int main()
{
    int resztvevok_szama;
    cin >> resztvevok_szama;
    int szomszed[resztvevok_szama*resztvevok_szama];
    int leult[resztvevok_szama];


    leult_nullazas(resztvevok_szama, leult);
    szomszed_nullazas(resztvevok_szama, szomszed);

    kiirLeultE(resztvevok_szama, leult);
    kiirVoltSzomszedE(resztvevok_szama, szomszed);
    for(int i=0; OsszesSzomszedMegvan(resztvevok_szama, szomszed); i++)
    {
        leult_nullazas(resztvevok_szama, leult);
        kereses( resztvevok_szama,szomszed, leult,0, 0,1);
        cout << "ennyi megoldasa van" <<i+1<<endl;
    }

    kiirVoltSzomszedE(resztvevok_szama, szomszed);
    kiirLeultE(resztvevok_szama, leult);

    return 0;
}

void kereses(int resztvevok_szama,int szomszed[], int leult[],int i, int j, int db)
{
    leult[db]=-1;
    cout << "ujabb"<<endl;
    kiirLeultE(resztvevok_szama, leult);
    while(j<resztvevok_szama && db<resztvevok_szama)
    {
        cout << "i es j erteke " << i << " " << j << "db "<< db << endl;
        if(!leultE(leult, resztvevok_szama, j))
        {
            cout << "j nem ult meg e " << j  << endl;
            if(szomszed[j+i*resztvevok_szama]==1)
            {
                cout << "leulhet " << j  << endl;

                leult[db]=j;
                db++;
                szomszed[j+i*resztvevok_szama]=0;
                szomszed[j*resztvevok_szama+i]=0;
                i=j;
                j=0;
                kiirVoltSzomszedE(resztvevok_szama, szomszed);
                kiirLeultE(resztvevok_szama, leult);
            }
            else
            {
                cout << "de a "<< i << "melle nem ultetheto" << endl;
                kiirLeultE(resztvevok_szama, leult);
                j++;
            }

        }
        else
        {
            ++j;

        }
    }
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    if(j==resztvevok_szama && db==resztvevok_szama-1 && resztvevok_szama%2==0)
    {
        for(j=0; j<resztvevok_szama; j++)
        {
            cout << "i es j erteke " << i << " " << j << endl;
            if(!leultE(leult, resztvevok_szama, j))
            {
                cout << "akkor ot leultetem ide" << endl;
                leult[db]=j;
                db++;
                szomszed[j+i*resztvevok_szama]=0;
                szomszed[j*resztvevok_szama+i]=0;
                i=j;
                kiirVoltSzomszedE(resztvevok_szama, szomszed);
                kiirLeultE(resztvevok_szama, leult);
            }
        }
    }
    else if(j==resztvevok_szama && db!=resztvevok_szama)
    {

        szomszed[leult[db-2]+(db-1)*resztvevok_szama]=1;
        szomszed[leult[db-1]*resztvevok_szama+(db-2)]=1;
        cout << db << " db  " <<  leult[db-2]<<" leult-1 "<< leult[db-1]<< " leult " << endl;
        kereses(resztvevok_szama, szomszed, leult, leult[db-2], leult[db-1]+1, db-1);
    }

    szomszed[0+i*resztvevok_szama]=0;
    szomszed[0+i]=0;
    db++;
    cout << "utcso" << endl;
    kiirVoltSzomszedE(resztvevok_szama, szomszed);
}

bool OsszesSzomszedMegvan(int resztvevok_szama, int szomszed[])
{
    bool van=false;
    for(int i=0; i<resztvevok_szama; i++)
    {
        for(int j=0; j<resztvevok_szama; j++)
        {
            if(szomszed[i*resztvevok_szama+j]==1)
            {
                van=true;
            }

        }
    }
    return van;
}

void szomszed_nullazas(int resztvevok_szama, int szomszed[])
{
    for(int i=0; i<resztvevok_szama; i++)
    {
        for(int j=0; j<resztvevok_szama; j++)
        {
            if(i!=j)
            {
                szomszed[i*resztvevok_szama+j]=1;
            }
            else
            {
                szomszed[i*resztvevok_szama+j]=0;
            }

        }
    }
}
void leult_nullazas(int resztvevok_szama, int leult[])
{
    for(int i=0; i<resztvevok_szama; i++)
    {
        if(i!=0)
        {
            leult[i]=-1;
        }
        else
        {
            leult[i]=0;
        }

    }
}

bool leultE(int leult[], int resztvevok_szama, int leulo)
{
    bool mar_leult_e=false;
    for(int i=0; i<resztvevok_szama; i++)
    {
        if(leulo==leult[i])
        {
            mar_leult_e=true;
        }
    }
    return mar_leult_e;
}

void kiirVoltSzomszedE(int resztvevok_szama, int *szomszed)
{
    for(int i=0; i<resztvevok_szama; i++)
    {
        for(int j=0; j<resztvevok_szama; j++)
        {
            cout << szomszed[i*resztvevok_szama+j]<< " ";
        }
        cout << endl;
    }

}

void kiirLeultE(int resztvevok_szama, int *leult)
{
    for(int i=0; i<resztvevok_szama; i++)
    {
        cout << leult[i]<< " ";
    }
    cout << endl;
}
