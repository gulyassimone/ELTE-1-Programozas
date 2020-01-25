#include <iostream>

using namespace std;
void sportnap1(int Tan[], int X);
void sportnap2(int Tan[], int Sport[]);
void sportnap3(int Tan[], int Sport[], int S);
void sportnap4(int Tan[], int Sport[], int S);
void sportnap5(int Tan[], int Sport[], int S);
int N;


int main()
{
    int T, S;
    cin >> T >> S >> N;
    int Tan[N],Sport[N], X;

    for (int i=0; i<N ; i++)
    {
        cin >> Tan[i] >> Sport[i];
    }
    cin >> X;

    sportnap1(Tan, X);
    sportnap2(Tan, Sport);
    sportnap3(Tan, Sport, S);
    sportnap4(Tan, Sport, S);
    sportnap5(Tan, Sport,S);
    return 0;
}
void sportnap1( int Tan[], int X)
{
    cout << "#" << endl;
    //megszamolas tetele
    int db=0;
    for(int i=0; i<N; i++)
    {
        if(Tan[i]==X)
        {
            db++;
        }
    }
    cout << db << endl;
}
void sportnap2( int Tan[], int Sport[])
{
    cout << "#" << endl;
    //kereses tetele
    int j=0;
    int i;
    bool van =false;

    while (j<N && !van)
    {
        i=0;
        while(i<N && !(Tan[i]==Tan[j] && Sport[i]==Sport[j] && i!=j))
        {
            i++;
        }
        van=i<N;
        j++;
    }

    if(van)
    {
        cout << Tan[i] << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
void sportnap3(int Tan[], int Sport[], int S)
{
    cout << "#" << endl;
    //megszamolas tetele
    int Z[N];
    for(int i=0; i<S; i++)
    {
        int db=0;
        for(int j=0; j<N; j++)
        {
            if (Sport[j]==i+1)
            {
                int k=0;
                while(k<db && Tan[j]!=Z[k])
                {
                    k++;
                }
                if(k>=db)
                {
                    Z[db]=Tan[j];
                    db++;
                }
            }
        }
        cout << db << " ";

    }
    cout << endl;
}

void sportnap4(int Tan[], int Sport[], int S)
{
    cout << "#" << endl;
    int max=1;
    int ertek=Tan[0];
    for(int i=0; i<N; i++)
    {
        int db=0;
        int Z[N];
        for(int j=1; j<N; j++)
        {
            int k=0;
            if (Tan[i]==Tan[j])
            {
                while(k<=db && Sport[j]!=Z[k])
                {
                    k++;
                }
                if (k>db)
                {
                    Z[db]=Sport[j];
                    db++;
                }
            }

        }
        if(max<db)
        {
            max=db;
            ertek=Tan[i];
        }
    }
    cout << ertek<< endl;
}
void sportnap5(int Tan[], int Sport[], int S)
{
    cout << "#" << endl;

    int db=0;
    for(int i=0; i<N; i++)
    {
        j=0;
        while(j<N && X[i]!=X[j])
        {
            j++;
        }
        if(j>=N)
        {
            Z[db]=X[j];
            db++;
        }
    }
}



