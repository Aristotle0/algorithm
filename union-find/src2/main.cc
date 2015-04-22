#include "FactoryQuickFind.h"
#include "FactoryQuickUnion.h"
#include "FactoryWeightedQuickUnion.h"
#include <string>
#include <iostream>
#include <memory>
#include <fstream>
#include <vector>
int main(int argc, char const *argv[])
{

    std::ifstream fin(argv[1]);
    int N;
    fin >> N;

    FactoryQuickFind factory1;
    std::shared_ptr<UFBase> uf;
    uf = factory1.createUF(N);
    int p, q;
    while (fin >> p >> q) {
        if (uf->connected(p, q)) continue;
        uf->union2(p, q);
    }
    uf->show();
    return 0;
}