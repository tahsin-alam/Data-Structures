//
// Created by tahsi on 7/18/2017.
//

#ifndef TEMP_H
#define TEMP_H

#include <cstdlib> // provoides size_t
#include <iostream>


namespace tahsin_data_structures {
    template <class seq> // the template prefix.
    class temp {
    public:
        static const int DEFAULT_CAPACITY = 30;
        typedef seq value_type;
        typedef std::size_t size_type;

        //default constructors
        temp(size_type init_capacity = DEFAULT_CAPACITY);

        //copy constructors
        temp(const temp &source);

        //destructors
        ~temp();

        //erase first element.
        void erase_first();

        //erase last element.
        void erase_last();

        //removes occurence of a value
        void erase_occurance(const seq& target, const size_type holder);

        //accepts index of an element and erase that element from the index
        void erase_from(const seq & index);

        //insert function.It insert element to any specific index.
        void insert_at(const seq& value, int index);

        //insert_first function for inserting element at the first index.
        void insert_first(const seq& value);

        //insert at the end of the temp
        void insert(const seq& last);

        //size of an element
        size_type size() const { return used; };// using inline function.

        //count number of occurence of a value
        size_type count( const seq& target) const;

        void operator+=(const temp& add);

        void operator=(const temp& source);

        bool operator==(const temp& s1);

        template <typename M>
        friend std::ostream &operator<<(std::ostream &output, const temp <M> &data_one);

        template<typename M>
        friend std::istream &operator>>(std::istream &input, temp<M> &data_one);

    private:
        size_type capacity;// capacity of holding items.
        size_type used;// how many are used or accessed in the array.
        value_type *data;// partially filled array.

    };

//Non-Member Function.
    template <class seq>
    temp<seq> operator+(const temp<seq> & s1, const temp<seq> & s2);
}



#endif //TEMP_H
