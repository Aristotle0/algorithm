#include "UFBase.h"

#include <iostream>

UFBase::UFBase(int n)
{
    for (auto i=0; i!=n; ++i)
        id.push_back(i);
    count = n;
}

bool
UFBase::connected(int p, int q)
{
    return find(p) == find(q);
}

void
UFBase::show()
{
    for (auto x : id)
        std::cout << find(x) << " ";
    std::cout << std::endl;
}