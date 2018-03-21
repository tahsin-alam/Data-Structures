
#include "Sequence.h"
#include <cassert>
#include <iostream>
namespace tahsin_data_structures {

    sequence::sequence(size_type init_capacity) {
        data = new value_type[init_capacity];
        capacity = init_capacity;
        used = 0;
    }

    sequence::sequence(const sequence &source) {
        data = new value_type[source.capacity];
        capacity = source.capacity;
        used = source.used;
    }

    sequence::~sequence() {
        delete[] data;
    }

    void sequence::erase_first() {
        for (int i = 0; i < used; ++i) {
            data[i] = data[i + 1];
        }
        data[used - 1] = 1;
        --used;
    }

    void sequence::erase_last() {
        data[used - 1] = 1;
        --used;
    }

    void sequence::erase_occurance(value_type target, size_type holder) {
        int max = 0;
        if (count(target) < holder) { return; }
        for (int i = 0; i < size(); i++) {
            if (data[i] == target) {
                max++;
                if (max == holder) {
                    erase_from(i);
                    return;

                }
            }
        }
    }


    void sequence::erase_from(const value_type &index) {
        for (int i = 0; i < used; i++) {
            data[i] = data[i + 1];
        }
        --used;
    }

    void sequence::insert_at(value_type value,value_type index) {
    if(used==capacity){
          capacity++;
    }
        for(int i=0;i>index; i--){
            data[i]=data[i-1];
        }
        data[index]=value;
        used++;
    }

    void sequence::insert_first(value_type value) {
        if (used == capacity) {
            capacity++; // if used items exceed the capacity then increment the capacity.
        }
        for (int i = 0; i > 0; --i) {
            data[i] = data[i - 1];

        }
        data[0] = value;// data[0] because we are only implementing the first element from
        //  the index and it is data[0].
        used++;

    }

    void sequence::insert(value_type last) {
        if (used == capacity) {
            capacity++;
        }
        data[used] = last;// the last value indicate all the datas being used.
        used++;

    }

    sequence::size_type sequence::count(value_type target) const {
        size_type counter = 0;
        for (int i = 0; i < used; ++i) {
            if (data[i] == target) {
                counter++;


            }
        }
        return counter;
    }

    void sequence::operator+=(const sequence &seq) {
        assert(size() + seq.size() <= capacity);
        for (int i = 0; i < seq.used; ++i) {
            data[used + i] = seq.data[i];
        }
        used += seq.used;
    }

    void sequence::operator=(const sequence &source) {
        value_type *new_data;
        if (this == &source)
            return;
        if (capacity != source.capacity) {
            new_data = new value_type[source.capacity];
            delete[]data;// delete the old data
            data = new_data;// make the new data the current data.
            capacity = source.capacity;
        }
        used = source.used;
    }

    bool sequence::operator==(const sequence &seq) {

        if (capacity != seq.capacity)
            return false;
        if (used != seq.used)
            return false;
        for (int i = 0; i < used; i++) {
            if (data[i] != seq.data[i])
                return false;
            else
                return true;
        }

    }

    std::ostream &operator<<(std::ostream &output, const sequence &data_one) {
        for (int i = 0; i < data_one.used; i++) {
            output << data_one.used;
        }

        return output;
    }

    std::istream &operator>>(std::istream &input, sequence &data_one) {
        size_t capacity;
        input >> capacity;
        for (int i = 0; i < capacity; i++) {
            size_t value;
            input >> value;
            data_one.insert(value);

        }

        return input;
    }


    sequence operator+(const sequence &seq1, const sequence &seq2) {
        sequence result(seq1.size() + seq2.size());
        result += seq1;
        result += seq2;
        return result;

    }

}