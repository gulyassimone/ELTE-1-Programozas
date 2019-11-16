#include <iostream>

using namespace std;

int main()
{
    int Ho[]={0,1,2,3,4,5,6,10,11,12,7};
    int db=0;
    for(int i=1;i<=10; i++)
    {
        if(Ho[i]<3 || Ho[i]==12)
        {
            db=db+1;
            cout << db << endl;
        }
    }

    cout << db << endl;
    return 0;
}
