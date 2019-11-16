#include <iostream>

using namespace std;

int main()
{
    int Ho[]={0,30,2,3,4,5,6,10,11,12,7};
    int elso=1;
    for(int i=2;i<=10; i++)
    {
        if(Ho[i]<Ho[elso])
        {
            elso=i;
        }
    }

    cout << elso << endl;
    return 0;

}
