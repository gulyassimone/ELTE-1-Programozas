#include <iostream>

using namespace std;

int main()
{
    int  S=0;
    int jov[]={0,100,200,300,400,-100, -300};
    for(int i=1; i<=6;i++)
    {
        S=S+jov[i];
    }
    cout << S;
    return 0;
}
