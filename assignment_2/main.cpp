#include <iostream>

using namespace std;

int main()
{
    int number_of_pair;
    cin >> number_of_pair;
    string creature[number_of_pair], food[number_of_pair], herbivorous[number_of_pair], eating_strategy[number_of_pair];
    int number_of_herbivorous=0;
    for(int i=0; i<number_of_pair; i++)
    {
        cin >> creature[i] >> food[i] ;
    }
    for(int i=0; i<number_of_pair; i++)
    {
        if(eating_strategy[i]=="C")
        {
            continue;
        }
        else
        {
            eating_strategy[i]="H";
            for (int j=0; j<number_of_pair; j++)
            {
                if (creature[i]==creature[j])
                {
                    for(int k=0; k<number_of_pair; k++)
                    {
                        if(food[j]==creature[k])
                        {
                            eating_strategy[i]="C";
                        }
                    }
                }
            }
        }
        if(eating_strategy[i]=="H")
        {
            number_of_herbivorous++;
            herbivorous[number_of_herbivorous-1]=creature[i];
            for (int j=0; j<number_of_herbivorous-1; j++)
            {
                if(creature[i]==herbivorous[j])
                {
                    number_of_herbivorous--;
                }
            }
        }
    }
    cout << number_of_herbivorous << endl;
    for(int i=0; i<number_of_herbivorous; i++)
    {
        cout << herbivorous[i] << endl;
    }
    return 0;
}
