#include "QuickUnionUF.h"

int
QuickUnionUF::find(int p)
{
    while (p != id[p]) p = id[p];
    return p;
}

void
QuickUnionUF::union2(int p, int q)
{
    int pRoot = find(p);
    int qRoot = find(q);
    if (pRoot == qRoot) return;
    id[pRoot] = qRoot;
    --count;
}