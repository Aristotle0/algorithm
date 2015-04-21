#include "WeightedQuickUnionUF.h"

WeightedQuickUnionUF::WeightedQuickUnionUF(int n):
    UFBase::UFBase(n)
{
    weight.assign(n, 1);
}

int
WeightedQuickUnionUF::find(int p)
{
    while (p != id[p]) p = id[p];
    return p;
}

void
WeightedQuickUnionUF::union2(int p, int q)
{
    int pRoot = find(p);
    int qRoot = find(q);
    if (pRoot == qRoot) return;
    if (weight[pRoot] < weight[qRoot]) {
        id[pRoot] = qRoot;
        weight[qRoot] += weight[pRoot];
    }
    else {
        id[qRoot] = pRoot;
        weight[pRoot] += weight[qRoot];
        --count;
    }
}