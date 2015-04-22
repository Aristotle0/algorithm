#ifndef FactoryQuickUnion_H_
#define FactoryQuickUnion_H_

#include "FactoryBase.h"
#include <memory>
#include <string>

class FactoryQuickUnion : public FactoryBase
{
public:
    std::shared_ptr<UFBase> createUF(const int);
};


#endif