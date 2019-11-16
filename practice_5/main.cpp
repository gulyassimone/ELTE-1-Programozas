#include <iostream>

using namespace std;

int main()
{
    int N=13;
    int TI=-1;
    int jegy[]={5,4,1,2,1,3,4};
    bool bukott;
     int i=1;
     while (i<=N && jegy[i]!=1)
     {
         i++;
     }
     bukott=i<=N;
     if(bukott)
     {
         TI=i;
     }
     cout << TI;
    return 0;
}
