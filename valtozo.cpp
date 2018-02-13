#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cout << "a= ";
    cin >> a;
    cout << "\n" << "b= ";
    cin >> b;
    cout << "\n";
    a = b - a;
    b = b - a;
    a = b + a;
    cout << "Kivonás-összeadással:\n" << "a= " << a << "\nb= " << b << "\n";
    a = a * b;
    b = a / b;
    a = a / b;
    cout << "Szorzás-osztással:\n" << "a= " << a << "\nb= " << b;
    return 0;
}
