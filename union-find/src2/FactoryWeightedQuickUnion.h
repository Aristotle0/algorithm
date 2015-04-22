#ifndef FactoryWeightedQuickUnion_H_
#define FactoryWeightedQuickUnion_H_

#include "FactoryBase.h"
#include <memory>
#include <string>

class FactoryWeightedQuickFind : public FactoryBase
{
public:
    std::shared_ptr<UFBase> createUF(const int);
};

#endif