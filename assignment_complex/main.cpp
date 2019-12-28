#include <iostream>
#include <sstream>
#include <vector>

#define MaxNM 1000
#define MinNM 1
#define MaxH 50
#define MinH -50
//#define BIRO

using namespace std;

struct Kimenet
{
    int T;
    vector<int> homerseklet_csokkeno_varosok;
};
int SzamVizsgalat(string u, string kapcsolo);
bool ErtekkeszletVizsgalat(int bemenet, string kapcsolo);
Kimenet HomersekletCsokkenesVizsgalat(int N, int M);
void Kiir(Kimenet kimenet);

int main()
{
    //Deklaráció
    int N, M;
    string bemenet;
    cerr << "Adja meg a városok számát(1 és 1000 közötti érték, egyenlőség megengedett) : " << endl;
    #ifdef BIRO
        cin >> N;
#else
        //Városok számának megadása és bemenet helyességének vizsgálata
        cin >> bemenet;
        N=SzamVizsgalat(bemenet, "települések száma");
#endif // BIRO
    cerr << "Adja meg a napok számát(1 és 1000 közötti érték, egyenlőség megengedett) : " << endl;
    #ifdef BIRO
        cin >> M;
#else
        //Városok számának megadása és bemenet helyességének vizsgálata
        cin >> bemenet;
        M=SzamVizsgalat(bemenet, "napok száma");
#endif // BIRO

    Kimenet kimenet;
    cerr << "Kérem, adjon meg " << N*M << " db hőmérséklet értéket, amely -50 és 50 közé eső egész szám!" << endl;
    kimenet=HomersekletCsokkenesVizsgalat(N, M);
    Kiir(kimenet);

    return 0;
}

int SzamVizsgalat(string bemenet, string kapcsolo)
{
    int szam;
    stringstream sstr;
    sstr.str("");
    sstr.clear();

    sstr << bemenet;
    sstr >> szam;
    while(sstr.fail() || !sstr.eof() || !ErtekkeszletVizsgalat(szam, kapcsolo))
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
bool ErtekkeszletVizsgalat(int bemenet, string kapcsolo)
{

    bool megfelelosseg=true;
    if(kapcsolo.compare("települések száma")==0 || kapcsolo.compare("napok száma")==0 )
    {
        if(MinNM>bemenet || MaxNM<bemenet)
        {
            cerr << "A bemenet nem 1 és 1000 közötti egész szám. Kérlek add meg újra!" << endl;
            megfelelosseg=false;
        }
    }
    else if(kapcsolo.compare("hőmérséklet")==0)
    {
        if(MinH>bemenet || MaxH<bemenet)
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

Kimenet HomersekletCsokkenesVizsgalat(int N, int M)
{
    Kimenet kimenet;
    kimenet.T=0;
    int He, Hu;
    string bemenet;
    for(int i=0; i<N ; i++)
    {
        int db=0;
        Hu=50;
        for (int j=0; j<M; j++ )
        {
            #ifdef BIRO
        cin >> Hu;
#else
        //Városok számának megadása és bemenet helyességének vizsgálata
        cin >> bemenet;
        Hu=SzamVizsgalat(bemenet, "hőmérséklet");
#endif // BIRO
            if(db<7)
            {
                bool csokkenE=He>Hu;
                if(csokkenE)
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
                    kimenet.T++;
                }
                He=Hu;
            }
        }
    }
    return kimenet;
}

void Kiir(Kimenet kimenet)
{
    cerr << "7 alkalommal közvetlenül egymás után csökkenő hőmérsékletű városok száma es felsorolása: " << endl;
    cout << kimenet.T << " ";
    for (int i = 0; i<kimenet.T; i++)
    {
        cout << kimenet.homerseklet_csokkeno_varosok[i] << " ";
    }
}

