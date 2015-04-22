#ifndef QuickFindUF_H_
#define QuickFindUF_H_

#include "UFBase.h"

class QuickFindUF: public UFBase
{
public:
    using UFBase::UFBase;
    void union2(int p, int q);
    int find(int p);
};

#endif