#include <iostream>
#include "HotDogStand.h"

using namespace std;

int main() {
    HotDogStand s1(1, 0);
    HotDogStand s2(2, 0);
    HotDogStand s3(3, 0);

    for (int i = 0; i < 10; ++i) {
        s1.justSold();
        if (i % 2 == 0)
            s2.justSold();
    }

    cout <<
        "ID: " << s1.getId() << endl <<
        "NumSoldToday: " << s1.getNumSoldToday() << endl <<
        "Total Amt Sold : " << s1.getAmtSold() << endl;
}