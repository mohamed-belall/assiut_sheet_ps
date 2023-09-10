#include <iostream>
using namespace std;

int main()
{
    long long n, m;
    int sum = 0;
    cin >> n >> m;
    sum += (n % 10);
    sum += (m % 10);
    cout << sum;

    return 0;
}