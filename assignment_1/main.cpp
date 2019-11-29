#include <iostream>

using namespace std;

int main()
{
    int size_of_factory,number_of_notes, first_factory,second_factory,
    number_of_consols_of_first_factory, numbers_of_consols_second_factory ;
    number_of_consols_of_first_factory=0;
    numbers_of_consols_second_factory=0;

    cin >> size_of_factory;
    string name_of_factory[size_of_factory];

    for(int i=0; i<size_of_factory; i++) // gyarto neve betoltes
    {
        cin >> name_of_factory[i];
    }
    cin >> number_of_notes;
    int id_of_factory[number_of_notes], generation[number_of_notes], console[number_of_notes];
    for(int i=0; i<number_of_notes; i++) // feljegyzesek betoltese
    {
        cin >> id_of_factory[i] >> generation[i] >> console[i];
    }
    cin >> first_factory >> second_factory;

    for(int i=0; i<number_of_notes; i++)
    {
        if(first_factory==id_of_factory[i])
        {
            number_of_consols_of_first_factory+=console[i];
        }
        else if(second_factory==id_of_factory[i])
        {
            numbers_of_consols_second_factory+=console[i];
        }
    }
    if(number_of_consols_of_first_factory==numbers_of_consols_second_factory)
    {
        cout<<"EGYEZIK";
    }
    else if(number_of_consols_of_first_factory>numbers_of_consols_second_factory)
    {
        cout<< name_of_factory[first_factory-1] << endl;
    }
    else
    {
        cout<< name_of_factory[second_factory-1] << endl;
    }
    return 0;
}



