#include <iostream>

using namespace std;

int main()
{
    string szo = "vlami";
    string mgh = "aeiuo";
    int i, j, mh;
    bool maganhangzoe=false;
    i=0;
    while(!maganhangzoe)
    {
        j=0;
        while(j<mgh.length() &&  szo[i]!=mgh[j])
        {
            j++;
        }
    maganhangzoe=j<mgh.length();
    i++;
    }
    mh=i;
    cout <<i;

    return 0;
}
