#include "Money.h"

using namespace std;

int main()
{
    const string CURRENCY_A = "EURO";

    Money a(CURRENCY_A, 100, 90);
    Money b(CURRENCY_A, 10, 45);

    cout << "After Initialisation, using stream op to print" << endl;
    cout << "A: " << a << endl;
    cout << "B: " << b << endl;

    cout << endl << "c = a - b" << endl;
    Money c = a - b;
    cout << "C: " << c << endl;

    cout << endl << "c = c * 2" << endl;
    c = c * 2;
    cout << "C: " << c << endl;

    cout << endl << "c = c / 4" << endl;
    c = c / 4;
    cout << "C: " << c << endl;

    cout << endl << "Testing comparision ops" << endl;
    cout << "a == b " << (a == b ? "true" : "false") << endl;
    cout << "a == a " << (a == a ? "true" : "false") << endl;
    cout << "a < b " << (a < b ? "true" : "false") << endl;
    cout << "b < a " << (b < a ? "true" : "false") << endl;
    cout << "a > b " << (a > b ? "true" : "false") << endl;
    cout << "b > a " << (b > a ? "true" : "false") << endl;

    system("pause");
    return 0;
}
