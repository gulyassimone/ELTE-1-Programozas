#include <iostream>

using namespace std;

// eredmenz =0%

int main()
{
    int elsoosztaly, masodosztaly, harmadosztaly;
    cin >> elsoosztaly >> masodosztaly >> harmadosztaly;

    int elso_eredmenyk[elsoosztaly];
    for(int i=0; i<elsoosztaly; i++)
    {
        cin >> elso_eredmenyk[i];
    }

    int masod_eredmenyk[masodosztaly];
    for(int i=0; i<masodosztaly; i++)
    {
        cin >> masod_eredmenyk[i];
    }

    int harmad_eredmenyk[harmadosztaly];
    for(int i=0; i<harmadosztaly; i++)
    {
        cin >> harmad_eredmenyk[i];
    }

    int feljebb=0;
    int lejjebb=0;
    int feljebb1=0;
    int lejjebb1=0;

    int i=0;
    int j=masodosztaly-1;
    while(harmad_eredmenyk[i]-masod_eredmenyk[j]>1)
    {
        cout << harmad_eredmenyk[i] << " " << masod_eredmenyk[j]<< endl;

        lejjebb=harmad_eredmenyk[i];
        i++;
        j--;
        feljebb=masod_eredmenyk[j];
        cout << harmad_eredmenyk[i] << " " << masod_eredmenyk[j]<< endl;
    }

    int k=0;
    int m=elsoosztaly-1;
    while(masod_eredmenyk[k]-elso_eredmenyk[m]>1)
    {
        cout << masod_eredmenyk[k] << " " << elso_eredmenyk[m]<< endl;

        lejjebb1=masod_eredmenyk[k];
        k++;
        m--;
        feljebb1=elso_eredmenyk[m];
        cout << masod_eredmenyk[k] << " " << elso_eredmenyk[m]<< endl;
    }
    if(feljebb<feljebb1)
    {
        cout << feljebb << endl;
    }
    else
    {
        cout << feljebb1 << endl;
    }
        if(lejjebb>lejjebb1)
    {
        cout << lejjebb << endl;
    }
    else
    {
        cout << lejjebb1 << endl;
    }

    return 0;
}
