#include "FactoryWeightedQuickUnion.h"
#include "WeightedQuickUnionUF.h"

std::shared_ptr<UFBase>
FactoryWeightedQuickFind::createUF(const int n)
{
    return std::make_shared<WeightedQuickUnionUF>(n);
}
