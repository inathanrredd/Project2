#include "Predicate.h"

Predicate::Predicate() {
    name = "";
}
Predicate::Predicate(std::string str) {
    name = str;
    parameters = {};
}
Predicate::~Predicate() {
    for (auto each:parameters) {
        delete each;
    }
}
std::string Predicate::toString() {
    std::string str = name + "(";
    for (auto each:parameters) {
        if (each->getValue().length() == 1) {
            str = str + each->getValue() + ",";
        }
        else {
            str = str + each->getValue() + ",";
        }
    }
    str.pop_back();
    str = str + ").";
    return str;
}
void Predicate::addParameter(std::string str) {
    Parameter* p = new Parameter(str);
    parameters.emplace_back(p);
}