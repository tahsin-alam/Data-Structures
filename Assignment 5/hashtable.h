//
// Created by tahsi on 8/1/2017.
//
#include "hash.h"
#ifndef ASSIGNMENT_5_HASHTABLE_H
#define ASSIGNMENT_5_HASHTABLE_H
#include<cstdlib>

class hash;
namespace tahsin_data_structures {


    class hashtable {
    public:
        static const int DEFAULT_CAPACITY = 10;
        typedef int value_type;
        typedef size_t size_type;

        hashtable();

        ~hashtable();

        // Hash Function
        size_t hash_function(value_type holder);

        //insert element
        void insert(value_type holder, value_type element);
        // remove element at a key
        void delete_key(value_type value);
        // rehash function to increase the size.and get value from the older table to the newer table.
        void resize();
        // serach element.
        size_t search(value_type chain);


    private:
        hash **data;
        int cap,size;
        int max_size;
        double hold;


    };
}
#endif //ASSIGNMENT_5_HASHTABLE_H
