#include <iostream>
#include "Tree.h"
using namespace std;

int main() {
    Tree tr;
    tr.add(10);
    tr.add(5);
    tr.add(15);
    tr.add(3);
    tr.add(7);
    tr.add(12);
    tr.add(20);
    tr.add(2);
    tr.add(4);
    tr.add(100);
    int maxDepth = tr.getMaxDepth();
  cout << "The maximum depth is: " << maxDepth ;

    return 0;
}
