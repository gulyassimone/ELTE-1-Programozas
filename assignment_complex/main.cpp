#include <iostream>
#include <sstream>
#include <vector>

using namespace std;

struct Kimenet
{
    int homerseklet_csokkeno_varosok_osszege;
    vector<int> homerseklet_csokkeno_varosok;
};
int szam_vizsgalat(string u, string kapcsolo);
bool ertekkeszlet_vizsgalat(int bemenet, string kapcsolo);
Kimenet homerseklet_csokkenes_vizsgalat(int telepules_szama, int napok_szama);
void kiir(int homerseklet_csokkeno_varosok_osszege, vector<int> homerseklet_csokkeno_varosok);


int main()
{
    //Deklaráció
    int telepules_szama, napok_szama;
    Kimenet kimenet;
    string bemenet;

    //Városok számának megadása és bemenet helyességének vizsgálata
    cerr << "Adja meg a városok számát(1 és 1000 közötti érték, egyenlőség megengedett) : " << endl;
    cin >> bemenet;
    telepules_szama=szam_vizsgalat(bemenet, "települések száma");


    //Napok számának megadása és bemenet helyességének vizsgálata
    cerr << "Adja meg a napok számát(1 és 1000 közötti érték, egyenlőség megengedett) : " << endl;
    cin >> bemenet;
    napok_szama=szam_vizsgalat(bemenet, "napok száma");

    //Hőmérsékletek megadása és bemenet helyességének vizsgálata
    cerr << "Kérem, adjon meg " << telepules_szama*napok_szama << " db hőmérséklet értéket, amely -50 és 50 közé eső egész szám!" << endl;

    kimenet=homerseklet_csokkenes_vizsgalat(telepules_szama, napok_szama);
    kiir(kimenet.homerseklet_csokkeno_varosok_osszege, kimenet.homerseklet_csokkeno_varosok);

    return 0;
}

int szam_vizsgalat(string bemenet, string kapcsolo)
{
    int szam;
    stringstream sstr;
    sstr.str("");
    sstr.clear();

    sstr << bemenet;
    sstr >> szam;
    while(sstr.fail() || !sstr.eof() || !ertekkeszlet_vizsgalat(szam, kapcsolo))
    {
        if(sstr.fail() || !sstr.eof())
        {
            cerr << "A bemenetbe nem egész szám adat került. Kérem adja meg újra az értéket! " << endl;
        }
        sstr.clear();
        sstr.str("");
        bemenet="";
        cin >> bemenet;
        sstr << bemenet;
        sstr>>szam;
    }
    return szam;
}
bool ertekkeszlet_vizsgalat(int bemenet, string kapcsolo)
{

    bool megfelelosseg=true;
    if(kapcsolo.compare("települések száma")==0 || kapcsolo.compare("napok száma")==0 )
    {
        if(1>bemenet || 1000<bemenet)
        {
            cerr << "A bemenet nem 1 és 1000 közötti egész szám. Kérlek add meg újra!" << endl;
            megfelelosseg=false;
        }
    }
    else if(kapcsolo.compare("hőmérséklet")==0)
    {
        if(-50>bemenet || 50<bemenet)
        {
            cerr << "A bemenet nem -50 és 50 közötti egész szám. Kérlek add meg újra!" << endl;
            megfelelosseg=false;
        }
    }
    else
    {
        cerr << "Nem megfelelő kapcsoló, kódhiba" << endl;
    }
    return megfelelosseg;
}

Kimenet homerseklet_csokkenes_vizsgalat(int telepules_szama, int napok_szama)
{
    Kimenet kimenet;
    kimenet.homerseklet_csokkeno_varosok_osszege=0;
    int elozo_nap_homerseklet, napi_homerseklet;
    string bemenet;
    for(int i=0; i<telepules_szama ; i++)
    {
        int db=0;
        elozo_nap_homerseklet=-50;
        for (int j=0; j<napok_szama; j++ )
        {
            cin >> bemenet;
            if(db<7)
            {
                napi_homerseklet=szam_vizsgalat(bemenet, "hőmérséklet");
                if(elozo_nap_homerseklet>napi_homerseklet)
                {
                    db++;
                }
                else
                {
                    db=0;
                }
                if(db==7)
                {
                    kimenet.homerseklet_csokkeno_varosok.push_back(i+1);
                    kimenet.homerseklet_csokkeno_varosok_osszege++;
                }
                elozo_nap_homerseklet=napi_homerseklet;
            }
        }
    }
    return kimenet;
}

void kiir(int homerseklet_csokkeno_varosok_osszege, vector<int> homerseklet_csokkeno_varosok)
{
    cerr << "7 alkalommal közvetlenül egymás után csökkenő hőmérsékletű városok száma: ";
    cout << homerseklet_csokkeno_varosok_osszege << " ";
    for (int i = 0; i<homerseklet_csokkeno_varosok_osszege; i++)
    {
        cerr << "7 alkalommal közvetlenül egymás után csökkenő hőmérsékletű városok felsorolása :";
        cout << homerseklet_csokkeno_varosok[i] << " ";
    }
}

