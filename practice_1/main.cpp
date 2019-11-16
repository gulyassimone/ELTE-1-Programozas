#include <iostream>

using namespace std;

int main()
{
    int N = 6;
    int X[] = {0,10,20,30,-40,50,3};
    bool Prim,Van;
    int i=1;
    int j=2;
    int absx=X[i];


    if(X[i]<0)
    {
        absx=-1*X[i];
    }
    while((j<=(absx/2) && !((absx%j)==0)))
    {
        j=j+1;
    }
    Prim = !(j<=absx/2);


    while((i<=N) && !Prim)
    {
        i++;
        j=2;
        absx=X[i];
        if(X[i]<0)
        {
            absx=-X[i];
        }
        //cout << i << " "<< absx<< endl;
        //cout << "l "<< j << " " << absx/2 << " " << absx%j<< endl;
        while((j<=(absx/2)) && !((absx%j)==0))
        {
            j++;
        }
        Prim = !(j<=(absx/2));
    }
    Van=(i<=N);

    if(Van)
    {
        cout << "Van " ;
    }
    else
    {
        cout << "Nincs ";
    }

}
