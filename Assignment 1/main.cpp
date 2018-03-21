#include <iostream>
#include"complex.h"

using namespace Tahsin;
using namespace std;

int main() {
    complex c1(4, 6);
    complex c2(-3, 1);

    complex c3 = subtract_complex(c1, c2);
    complex c4 = add_complex(c1, c2);

    c3.print();
    cout << endl;
    c4.print();
    return 0;
}


