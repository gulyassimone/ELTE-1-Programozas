#include <iostream>
#include <sstream>

using namespace std;

void viszgalat(string u);
void viszgalat2(string u);
int main()
{
    string u;
    getline(cin, u);
    viszgalat(u);
    string szemet;
    return 0;
}
void viszgalat(string u)
{
    int i;
    stringstream sstr; //eszkoz
    sstr.str(""); //ures
    sstr.clear();//minden hibabitet kitorol, hibaallapota jo

    sstr << u;
    while (sstr >> i, !sstr.eof())
    {
        cout << "sstr erteke  " << sstr << endl;
        cout << "Ezek a kimenetek " << sstr.eof() << " " << sstr.fail();
        cout << "u erteke " << u << endl;
        if(sstr.fail())
        {
            cout << "A bemenetbe nem szam adat is bekerult. Kerlek ird ujra" << endl;
            sstr.clear();
            sstr.str("");
            getline(cin, u);
            viszgalat2(u);
        }

        else
        {
            cout << "valami" << endl;
            cout << "i erteke "<< i << endl;
        }
    }
}
void viszgalat2(string u)
{
    int i;
    stringstream sstr; //eszkoz
    sstr.str(""); //ures
    sstr.clear();//minden hibabitet kitorol, hibaallapota jo

    sstr << u;
    while (sstr >> i, !sstr.eof())
    {
        cout << "sstr erteke  " << sstr << endl;
        cout << "Ezek a kimenetek " << sstr.eof() << " " << sstr.fail();
        cout << "u erteke " << u << endl;
        if(sstr.fail())
        {
            cout << "A bemenetbe nem szam adat is bekerult. Kerlek ird ujra" << endl;
            sstr.clear();
            sstr.str("");
            getline(cin, u);
            viszgalat(u);
        }
        else
        {
            cout << "i erteke "<< i << endl;
        }

    }
}
