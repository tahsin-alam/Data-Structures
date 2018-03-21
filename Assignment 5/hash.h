//
// Created by tahsi on 8/1/2017.
//
// this class is created only for the linked list node class.
#ifndef ASSIGNMENT_5_HASH_H
#define ASSIGNMENT_5_HASH_H
namespace tahsin_data_structures{
class hash {
public:
    static const int DEFAULT_CAPACITY = 10;
    int chain;
    int value;
    hash *get_next;

    //constructor
    hash(int chain, int value);
};
}

#endif //ASSIGNMENT_5_HASH_H
