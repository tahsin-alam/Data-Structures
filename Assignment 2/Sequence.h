//
// Created by tahsin on 6/30/2017.
//

#ifndef SEQUENCE_H
#define SEQUENCE_H

#include <cstdlib>
#include <iostream>

namespace tahsin_data_structures {

    class sequence {
    public:
        static const int DEFAULT_CAPACITY = 30;
        typedef int value_type;
        typedef size_t size_type;

        //default constructors
        sequence(size_type init_capacity = DEFAULT_CAPACITY);

        //copy constructors
        sequence(const sequence &source);

        //destructors
        ~sequence();

        //erase first element.
        void erase_first();

        //erase last element.
        void erase_last();

        //removes occurence of a value
        void erase_occurance(value_type target, size_type holder);

        //accepts index of an element and erase that element from the index
        void erase_from(const value_type &);

        //insert function.It insert element to any specific index.
        void insert_at(value_type value, value_type index);

        //insert_first function for inserting element at the first index.
        void insert_first(value_type value);

        //insert at the end of the sequence
        void insert(value_type last);

        //size of an element
        size_type size() const { return used; };// using inline function.

        //count number of occurence of a value
        size_type count(value_type target) const;


        void operator+=(const sequence &);

        void operator=(const sequence &);

        bool operator==(const sequence &);

        friend std::ostream &operator<<(std::ostream &output, const sequence &data_one);

        friend std::istream &operator>>(std::istream &input, sequence &data_one);

    private:
        size_type capacity;// capacity of holding items.
        size_type used;// how many are used or accessed in the array.
        value_type *data;// partially filled array.



    };

//Non-Member Function.
    sequence operator+(const sequence &, const sequence &);
}

#endif //SEQUENCE_H
