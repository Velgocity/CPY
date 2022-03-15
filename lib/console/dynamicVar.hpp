#include <iostream>

using namespace std;

string ChartoString(const char* variable) {
    std::string output(variable);
    return output;
}

string InttoString(int variable) {
    string output = std::to_string(variable);
    return output;
}

string floattostring(float variable) {
    string output = std::to_string(variable);
    return output;
}

int stringToInt(string variable) {
    int output = std::stoi(variable);
    return output;
}

double stringToFloat(string variable) {
    double output = std::stod(variable);
    return output;
}