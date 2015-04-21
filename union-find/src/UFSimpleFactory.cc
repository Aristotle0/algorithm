#include "UFSimpleFactory.h"
#include "QuickFindUF.h"
#include "QuickUnionUF.h"
#include "WeightedQuickUnionUF.h"
std::shared_ptr<UFBase>
UFSimpleFactory::createUF(const std::string &algorithm, int N)
{
    if (algorithm == "quickfind") {
        return std::make_shared<QuickFindUF>(N);
    }
    else if (algorithm == "quickunion") {
        return std::make_shared<QuickUnionUF>(N);
    }
    else if (algorithm == "weightedquickunion") {
        return std::make_shared<WeightedQuickUnionUF>(N);
    }
    else {
        throw;
    }
}