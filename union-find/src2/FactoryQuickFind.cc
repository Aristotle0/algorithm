#include "FactoryQuickFind.h"
#include "QuickFindUF.h"

std::shared_ptr<UFBase>
FactoryQuickFind::createUF(const int n)
{
    return std::make_shared<QuickFindUF>(n);
}