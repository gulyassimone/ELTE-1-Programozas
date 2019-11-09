#include <iostream>

using namespace std;

int absx(int szam)
{
    if(szam<0)
    {
        return -1*szam;
    }
    return szam;
}
bool prim(int x)
{
    int i=2;
    while(i<absx(x)/2 && !(absx(x) % i==0))
    {
        i++;
    }
    return !(i<=absx(x)/2);
}
int main()
{
    int n=10;
    int x[n];
    while((i<=N && !prim(x[i])))
    {
        i++;
    }
    bool van i<=N;
    cout << van;
    return 0;
}
