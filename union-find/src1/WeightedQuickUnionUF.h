#ifndef WeightedQuickUnionUF_H_
#define WeightedQuickUnionUF_H_

#include "UFBase.h"
#include <vector>

class WeightedQuickUnionUF: public UFBase
{
public:
    WeightedQuickUnionUF(const int n);
    int find(int p);
    void union2(int p, int q);
private:
    std::vector<int> weight;
};

#endif