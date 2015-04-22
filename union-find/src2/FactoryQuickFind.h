#ifndef FactoryQuickFind_H_
#define FactoryQuickFind_H_

#include "FactoryBase.h"
#include <memory>
#include <string>

class FactoryQuickFind : public FactoryBase
{
public:
    std::shared_ptr<UFBase> createUF(const int);
};

#endif