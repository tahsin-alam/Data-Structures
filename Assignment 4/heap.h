//
// Created by tahsin on 7/29/2017.
//

#ifndef ASSIGNMENT_4_HEAP_H
#define ASSIGNMENT_4_HEAP_H
#include <cstdlib>
#include <iostream>

namespace tahsin_data_structures {
    class heap {
    public:
        static const int DEFAULT_CAPACITY=20;
        typedef int value_type;
        typedef size_t size_type;
        bool isheap(value_type max);
        void min_heapify(value_type current );
        void min_heap();
        size_t parent(value_type x){return (x-1)/2;}//parent node.
        size_t left(value_type x){return (2*x)+1;}
        size_t right(value_type x){return(2*x)+2;}
        void swap(value_type value, value_type current);
        void insert(value_type entry);
        size_t delete_key();


    private:
        value_type *data;
        size_t capacity;
        size_t heap_size;


    };
}
#endif //ASSIGNMENT_4_HEAP_H
