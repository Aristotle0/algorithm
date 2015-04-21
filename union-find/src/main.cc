#include "UFSimpleFactory.h"
#include <string>
#include <iostream>
#include <memory>
#include <fstream>
int main(int argc, char const *argv[])
{
    std::string algorithm;
    std::cout << "Choose an algorithm: \n" <<
        "quickfind|quickunion|weightedquickunion" << std::endl;
    std::cin >> algorithm;

    std::ifstream fin(argv[1]);
    int N;
    fin >> N;

    std::shared_ptr<UFBase> uf;
    uf = UFSimpleFactory::createUF(algorithm, N);
    int p, q;
    while (fin >> p >> q) {
        if (uf->connected(p, q)) continue;
        uf->union2(p, q);
    }
    uf->show();
    return 0;
}