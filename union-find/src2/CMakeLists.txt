add_library(uflib UFBase.cc QuickFindUF.cc QuickUnionUF.cc WeightedQuickUnionUF.cc
FactoryBase.h FactoryQuickFind.cc FactoryQuickUnion.cc FactoryWeightedQuickUnion.cc)
add_executable(unionfind main.cc)
target_link_libraries(unionfind uflib)
