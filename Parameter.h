//
// Created by nathan on 10/5/22.
//

#ifndef PARAMETER_H
#define PARAMETER_H
#include <string>


class Parameter {

private:
    std::string value;


public:
    Parameter(std::string str);
    ~Parameter();
    std::string getValue();

};


#endif //PARAMETER_H
