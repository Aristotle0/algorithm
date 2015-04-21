#ifndef UFSimpleFactory_H_
#define UFSimpleFactory_H_

#include <memory>
#include <string>
#include "UFBase.h"

class UFSimpleFactory
{
public:
    static std::shared_ptr<UFBase> createUF(const std::string& algorithm);
};

#endif