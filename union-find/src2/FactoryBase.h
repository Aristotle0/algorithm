#ifndef FactoryBase_H_
#define FactoryBase_H_

#include "UFBase.h"
#include <memory>
#include <string>

class FactoryBase
{
public:
    virtual std::shared_ptr<UFBase> createUF(const int) = 0;
};

#endif