#include <iostream>

using namespace std;

int main()
{
    int N=6;
    int osszegzo[N];
    int vektor1[]={1,2,3,4,5,6};
    int vektor2[]={0,1,2,5,3,10};

    for(int i=0; i<N; i++)
    {
        osszegzo[i]=vektor1[i]+vektor2[i];
        cout << osszegzo[i]<< endl;
    }

    return 0;
}
