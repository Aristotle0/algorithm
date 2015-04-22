#ifndef QuickUnionUF_H_
#define QuickUnionUF_H_

#include "UFBase.h"

class QuickUnionUF: public UFBase
{
public:
    using UFBase::UFBase;
    int find(int p);
    void union2(int p, int q);
};

#endif