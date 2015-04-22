#include "QuickFindUF.h"

int
QuickFindUF::find(int p)
{
    return id[p];
}

void
QuickFindUF::union2(int p, int q)
{
    int pID = id[p];
    int qID = id[q];

    if (pID == qID) return;

    for (auto i=0; i!=id.size(); ++i) {
        if (id[i] == pID)
            id[i] = qID;
    }
    --count;
}
