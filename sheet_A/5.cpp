#include <iostream>
#include <iomanip> // to use setpercision to set number of digit after decimal point
using namespace std;

int main()
{
    cout << fixed << setprecision(9);
    float r;
    double area;
    double pi = 3.141592653;
    cin >> r;
    area = r * r * pi;
    cout << area;

    return 0;
}