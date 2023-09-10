#include <iostream>
using namespace std;

int main()
{
    string n1[2];
    string n2[2];
    cin >> n1[0] >> n1[1];
    cin >> n2[0] >> n2[1];
    if (n1[1] == n2[1])
    {
        cout << "ARE Brothers";
    }
    else
    {
        cout << "NOT";
    }

    return 0;
}