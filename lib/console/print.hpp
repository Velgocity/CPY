#include <iostream>

using namespace std;

void prnt(string text, string op = "null") {
    if (op == "outLine") {
        cout << text << endl;
    } else if (op == "null") {
        cout << text;
    }
}