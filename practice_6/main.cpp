#include <iostream>

using namespace std;

int main()
{
    string szo = "vlm";
    string maganhangzo ="aeiou";
    bool van, megjobbanvan;
    int j;
    int i=0;
    while(i<szo.length()&& !van)
    {
        j=0;
        while(j<=maganhangzo.length()-1 && szo[i]!=maganhangzo[j])
        {
            j++;
        }
        van = j<=maganhangzo.length()-1;

        i++;
    }
    megjobbanvan=i<szo.length();
    if(megjobbanvan)
        cout << "Van";
    else
        cout << "Nem";
    return 0;
}
