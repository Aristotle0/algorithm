add_library(uflib UFBase.cc QuickFindUF.cc QuickUnionUF.cc WeightedQuickUnionUF.cc UFSimpleFactory.cc)
add_executable(unionfind main.cc)
target_link_libraries(unionfind uflib)
