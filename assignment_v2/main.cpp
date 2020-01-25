#include <iostream>
#include <cmath>    //pow

using namespace std;

bool find_sitted(int row, int next, int  guest_number, int *seating_plan);

//elozo korokben szomszadja volt
bool find_neighboor(int coloumn, int next, int orders_number,int guest_number, int temp_seating);

void output( int orders_number, int  guest_number, int *seating_plan);

int main()
{
    int guest_number;
    cin >> guest_number;
    int orders_number = guest_number/2;

    int seating[guest_number];
    int seating_plan[orders_number][guest_number];

    //seged tomb feltoltes
    for(int coloumn=0; coloumn<guest_number; coloumn++)
    {
        seating[coloumn]=0;
    }
    //tomb feltoltes ertekekkel
    for(int row=0; row<orders_number; row++)
    {
        for(int coloumn=0; coloumn<guest_number; coloumn++)
        {
            seating_plan[row][coloumn]=-1;
        }
    }

    for(int row=0; row<orders_number; row++)
    {
        cout << "sor: "<<row<< endl;
        seating_plan[row][0]=0;
        int db=0;
        for(int coloumn=0; coloumn<guest_number; coloumn++)
        {
            int next=guest_number-1;
            if( find_sitted(row, next, guest_number, (int *)seating_plan) && find_neighboor(coloumn, next,orders_number, guest_number, seating[seating_plan[row][coloumn]]) )
            {
                seating_plan[row][coloumn+1]=next;
                seating[coloumn]=pow(2,next);
                seating[next]=pow(2,coloumn);
                cout << "beleteszem: " << next << endl;
                db++;
            }
        }
    }
    output( orders_number, guest_number, (int *)seating_plan);
    return 0;
}
//mar leult
bool find_sitted(int row, int next, int  guest_number, int *seating_plan)
{
    int coloumn=0;
    while(coloumn<guest_number && seating_plan[row*guest_number+coloumn]!=next)
    {
        coloumn++;
    }
    cout << "coloumn: " <<coloumn <<endl;
    return coloumn>guest_number;
}

//elozo korokben szomszadja volt
bool find_neighboor(int coloumn, int next, int orders_number,int guest_number, int temp_seating)
{
    while(coloumn>=0 && temp_seating-pow(2,next)>0)
    {
        temp_seating-=pow(2,next);
        coloumn--;
    }
    cout << "coloumn: " << coloumn << endl;
    return coloumn==-1;
}

void output( int orders_number, int  guest_number, int *seating_plan)
{

    for(int row=0; row<orders_number; row++)
    {
        for(int coloumn=0; coloumn<guest_number; coloumn++)
        {
            cout << seating_plan[row*guest_number+coloumn] << ", ";
        }
        cout << endl;
    }
}


