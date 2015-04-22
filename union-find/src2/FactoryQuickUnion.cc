#include "FactoryQuickUnion.h"
#include "QuickUnionUF.h"

std::shared_ptr<UFBase>
FactoryQuickUnion::createUF(const int n)
{
    return std::make_shared<QuickUnionUF>(n);
}