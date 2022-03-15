#include "lib/console/std.hpp"

stdlib;

nt loo(nt a, nt b) {
    return a + b;
}

vd loopN() {
    prnt("hello");
}

vd loopT() {
    prnt("a.")
}

nt main(arg) {
    nt i;
    fr (i=0;i<10;++i) {
        str ConvertString = InttoString(i);
        prnt(ConvertString);
    }
    loopNumber(loopN, 5);
    loopTime(loopT, 1000);

}
