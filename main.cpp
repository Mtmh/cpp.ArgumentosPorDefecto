#include <iostream>

using namespace std;

int suma(int a = 0, int b = 0);

int main()
{
    cout << suma(1, 2) << endl;
    return 0;
}

int suma(int a, int b)
{
    return a + b;
}
