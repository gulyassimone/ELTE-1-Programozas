#include <iostream>

using namespace std;

void fibonacci(int a)
{
    cout << "0" << " " << "1" << " ";
    for(int i=1; i<=a; i+=i)
    {
        cout << i << " ";
    }
}
int main()
{
    int a;
    cin >> a;
    fibonacci(a);


}
hf n-dik faktorialis
