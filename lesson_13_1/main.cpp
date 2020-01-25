#include <iostream>
#include <sstream>

using namespace std;

int main()
{

    /*  int n;
      cin >> n;
      int jegy[n];
      string nev[n];
    */
    stringstream sstr; //eszkoz
    sstr.str(""); //ures
    sstr.clear();//minden hibabitet kitorol, hibaallapota jo
    int j = 12;
    sstr << " alma " << j <<endl;
    sting s;
    c=sstr.peek(); //c karakter tipusu tomb, megnez egy betut
    getline(sstr,s);
    sstr.good(); //hasznalhato ha 0
    sstr.eof(); //nem volt benne semmi amikor olvasni akartam
    sstr.fail(); //nem sikerult beolsni
    // clear-rel lehet torolni

    getline(cin, s)
    sstr << s;
    do
    {
        sstr.str(""); //ures
        sstr.clear();//minden hibabitet kitorol, hibaallapota jo
    }



    /*
    for (int i=0; i<n; i++)
    {

        cin >> jegy[i];
        getline(cin, nev[i]);
    }

    for (int i=0; i<n; i++)
    {
        cout << jegy[i] << ";" << nev[i]<< endl;
    }*/
    return 0;
}
