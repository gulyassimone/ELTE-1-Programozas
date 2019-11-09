#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int sentence_length;
    cin >> sentence_length;
    cin.ignore();
    string sentence; //bemeneti mondat
    getline(cin,sentence);
    std::transform(sentence.begin(), sentence.end(), sentence.begin(), ::tolower);

    string searching_char; //karakterek
    getline(cin,searching_char);
    std::transform(searching_char.begin(), searching_char.end(), searching_char.begin(), ::tolower);
    int length_of_searchin_char=searching_char.length();

    int length_of_characters=sentence_length+1;
    int min_of_characters;
    int max_of_characters;
    int reference_of_loop=0;
    int reference_min=sentence_length+1;
    int reference_max=-1;
    int j;

    for(int i=0; i<length_of_searchin_char; i++)
    {
        j=reference_of_loop;
        while(j<sentence_length && sentence[j]!=searching_char[i])
        {
            j++;
        }
        if(j<sentence_length)
        {
            if(j<reference_min)
            {
                reference_min=j;
            }
            if(j>reference_max)
            {
                reference_max=j;
            }
            if(i==length_of_searchin_char-1)
            {
                i=-1;
                reference_of_loop=reference_min+1;
                if(length_of_characters>=reference_max-reference_min)
                {
                    length_of_characters=reference_max-reference_min;
                    min_of_characters=reference_max+1;
                    max_of_characters=reference_min+1;
                }
                reference_min=sentence_length+1;
                reference_max=-1;
            }
        }
        else
        {
            break;
        }
    }
    if(length_of_characters<sentence_length+1)
    {
        cout << max_of_characters << " " << min_of_characters ;
    }
    else
    {
        cout << "-1";
    }
    return 0;
}
