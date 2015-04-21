#ifndef QuickUnionUF_H_
#define QuickUnionUF_H_

class QuickUnionUF: public UFBase
{
public:
    int find(int p);
    void union(int p, int q);
};

#endif