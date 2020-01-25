#include <iostream>

using namespace std;


// const
// rotal balra
void rotal_balra(int tomb[], int n)
{
    int temp=tomb[0];
    for(int i=1; i<5; i++)
    {
        tomb[i-1]=tomb[i];
    }
    tomb[4]=temp;
}
// tomb kiir
void tomb_kiir(int tomb[], int n)
{
    for(int i=0; i<5; i++)
    {
        cout<< tomb[i] << " , ";
    }
    cout << endl;
}
//to.ttk.elte.hu


int main()
{
    int tomb[5] = {1,2,3,4,5};
    int n=5;
    rotal_balra(tomb, n);
    tomb_kiir(tomb, n);
    return 0;
}
