#include <iostream>
#include <cmath>    //pow
#include <vector>   //vector
#include <algorithm>    // find
#include <iterator>
using namespace std;

bool containIt(int *j, int sitted[], int size_of_array)
{
    while (j>=0 && result != end)
    {
        cout << "j "<<j<< endl;
        int *end = sitted + size_of_array;
        int *result = find(sitted, end, j);
    }
    return result == end;
}

bool alreadySittedNeighboor(int *i, int *temp_sitting_array, int *sitting_order_array, int size_of_array, int *sitted)
{

    if(temp_sitting_array[i]-temp<0)
    {

    }

    else
    {
        temp_sitting_array[j]-=temp;
    }
    return j<0
}

int next_sitted(int i, int *j, int *sitting_order_array, *sitted)
{
    int temp=pow(2,j);
    sitting_order_array[i]+=temp;
    sitting_order_array[j]+=pow(2,i);
    if(db==0)
    {
        sitted[i+1]=j+1;
    }
    else if(i!=0)
    {
        db++;
        i=j;
    }
    else
    {
        sitted[size_of_array]=j+1;
        i=j;
    }
    return i;
}

int main()
{
    int size_of_array;
    cin >> size_of_array;
    int sitting_order_array[size_of_array];

    for(int i=0; i<size_of_array; i++)
    {
        sitting_order_array[i]=pow(2,i);
    }
    for(int k=0; k<size_of_array; k++)
    {

        int sitted[size_of_array];
        sitted[0]=1;

        for(int i=1; i<size_of_array; i++)
        {
            sitted[i]=-1;
        }


        int temp_sitting_array[size_of_array];

        for(int i=0; i<size_of_array; i++)
        {
            temp_sitting_array[i]=sitting_order_array[i];
        }

        int i=0;
        while(sitted[i+1]==-1)
        {

            int j=size_of_array;
            if(containIt(*j, sitted, size_of_array))
            {
                alreadySittedNeighboor(j, temp_sitting_array, sitting_order_array, size_of_array, sitted);
            }
            else
            {
                int j=size_of_array;
                containIt(*j, sitted, size_of_array);

            }
        }


        for(int i=1; i<size_of_array; i++)
        {
            cout << sitted[i]
                 << ", ";
        }
        cout << endl;
    }

    return 0;
}
