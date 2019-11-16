#include <iostream>

using namespace std;

int main()
{
    int szam[] = {10, 20,3, 4,5};
    int eredmeny[5];
    int db=0;

    for(int i=0; i<5; i++)
    {
        if(szam[i]%2==0)
        {
         db++;
         eredmeny[db]=szam[i];
         cout << eredmeny [db] << endl;

        }
    }
    return 0;
}
