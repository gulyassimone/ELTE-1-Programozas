#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, db;

    int *fagyott, *nem_fagyott, *nap;

    db=0;
    cin >> n;
    nap=new int(n);
    for(int i=1; i<=n; i++)
    {
        cin >> nap[i];
    }
    for(int i=1; i<=n; i++)
    {
        cout << "Nap: " << nap[i]<< endl;

        if(nap[i]<0)
        {
            db++;
            fagyott=new int(db+1);
            fagyott[db]=i;
            cout << "fagyott: " << fagyott[db] << endl;
        }
        else
        {
            nem_fagyott=new int((i-db)+1);
            nem_fagyott[i-db]=i;
            cout << "nem fagyott: " << nem_fagyott[i-db] << endl;
        }
    }

    return 0;
}
