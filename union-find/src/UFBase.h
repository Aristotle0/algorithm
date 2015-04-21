#ifndef UFBase_H_
#define UFBase_H_

#include <vector>
class UFBase
{
public:
    UFBase();
    UFBase(int n);
    bool connected(int p, int q);
    void show();
    virtual void union2(int, int) = 0;
    virtual int find(int p) = 0;
protected:
    int count;
    std::vector<int> id;
};

#endif