#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int m, n;
    cin >> m;
    cin >> n;

    int t[m][n], k[n][m];
    vector<int> ki;
    //bemenet erteket kap
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            t[i][j]=i;
            cout << t[i][j];

        }
        cout << endl;
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(t[i][j]>=t[i][j-1] && t[i][j]>=t[i+1][j] && t[i][j]>=t[i-1][j]&& t[i][j]>=t[i][j+1])
            {
                ki.push_back(t[i][j]);
            }
        }
    }
    for(int i=0; i<ki.size(); i++)
    {
        cout<<ki[i];
    }
    return 0;
}
//hf 8 kiralyno elhelyezese egy tablan hogy ne legyen utesbe egymassal
//egy kiralynot vizsgaljuk meg hogz utesben van e


//
