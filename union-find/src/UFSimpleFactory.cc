#include "UFSimpleFactory.h"
#include "QuickFindUF.h"

std::shared_ptr<UFBase>
UFSimpleFactory::createUF(const std::string &algorithm, int N)
{
    if (algorithm == "unionfind") {
        return std::make_shared<QuickFindUF>(N);
    }
}