#include <iostream>
#include "heap.h"
using namespace std;
using namespace tahsin_data_structures;
    int main() {
        heap h;
        h.insert(5);
        h.insert(99);
        h.insert(66);
        h.insert(34);
        h.parent(65);
        h.left(45);
        h.right(55);
        h.min_heap();
        return 0;
    }
