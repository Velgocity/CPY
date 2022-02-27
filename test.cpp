#include <iostream>
#include "lib/console/console.hpp"

sng nmspc std;

nt hello() {
    return 1;
}

nt mn() {
    prnt("Hello World");
    str a = input("Lütfen adınızı giriniz : ");
    prnt("Adınız : " + a);

    // for
    fr (nt i = 0;i < 10; ++i) {
        string ia = InttoString(i);
        prnt(ia);
    }
}