#include <iostream>

using namespace std;

int main()
{
    cout << "Enter A and B: ";
    //comment
    // second comment
    //one more

    double a, b;
    cin >> a >> b;
    cout << "A + B = " << a + b << '\n'
        << "A - B = " << a - b << '\n'
        << "A * B = " << a * b << '\n'
        << "A / B = " << a / b << '\n';

    cout << "Max(A,B) = ";
    if (a>b) cout << a << '\n';
    else cout << b << '\n';

    cout << "Min (A,B) = ";
    if (a<b) cout << a << '\n';
    else cout << b << '\n';

}
