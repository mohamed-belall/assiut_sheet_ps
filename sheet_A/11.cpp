#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long a, b, c, max, min;
    cin >> a >> b >> c;
    cout << fmin(fmin(a, b), c) << " " << fmax(fmax(a, b), c);

    return 0;
}