//
// Created by tahsi on 7/19/2017.
//
#include "temp.h"
#include <cassert>

class temp;
namespace tahsin_data_structures {

    template<class seq>
//default constructors
    temp<seq>::temp(size_type init_capacity) {
        data = new seq[init_capacity];
        used = 0;
        capacity = init_capacity;
    }

// copy constructors
    template<class seq>
    temp<seq>::temp(const temp &source) {
        data = new seq[source.capacity];
        capacity = source.capacity;
        used = source.used;

    }
    //destructors
    template<typename seq>
    temp<seq>::~temp(){
        delete[]data;
    }
    //erase_first
    template <typename seq>
    void temp<seq>::erase_first() {
        for (int i = 0; i < used; i++) {
            data[i] = data[i + 1];//the index is at 0 so i+1 will acssess the first element after 0.
        }
        --used;
    }
        //erase_last
        template<typename seq>
        void temp<seq>::erase_last(){
            assert(used<DEFAULT_CAPACITY);
            seq current;
            current=data[--used];
}
    //erase_occurence
    template<typename seq>
    void temp<seq>::erase_occurance(const seq &target, const size_type holder) {
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
     //erase_from
     template<typename seq>
     void temp<seq>::erase_from(const seq &index) {
         assert(index<used);
         data[index]=data[used-1];
         --used;

     }
    //insert_at
    template <typename seq>
    void temp<seq>::insert_at(const seq &value, seq &index) {
    assert(size()<DEFAULT_CAPACITY);
        seq temp[DEFAULT_CAPACITY];// creating temporary array to copy our array.
    ++used;
        for(int i=0;i<used;i++){
            if(data[i]==value){
                for(int j=0; j<used; j++){
                    temp[j]=data[j];
                }
                for(int k=0; k<used; k++){
                    data[k+1]=temp[k];
                }
                data[value]=index;
                index++;
                return;

            }
        }
        return;
    }
//insert_first
    template<typename seq>
    void temp<seq>::insert_first(const seq &value) {
        assert(size()<DEFAULT_CAPACITY);
        data[used]=value;
        used++;
    }
//insert at the end.
    template<typename seq>
    void temp<seq>::insert(const seq &last) {
        if (used == capacity) {
        capacity++;
    }
    data[used]=last;
        used++;
    }

    //count function.
    template <typename seq>
   typename temp<seq>:: size_type temp<seq>::count(const seq &target) const {
        size_type counter = 0;
        for (int i = 0; i < used; ++i) {
            if (data[i] == target) {
                counter++;
            }
        }
        return counter;
    }
    //operator +=
    template <typename seq>
    void temp<seq>::operator+=(const temp &add) {
        assert(size() + add.size() <= capacity);
        for (int i = 0; i < add.used; ++i) {
            data[used + i] = add.data[i];
        }
        used += add.used;
    }
    //operator =
    template<typename seq>
    void temp<seq>::operator=(const temp &source) {
        seq *new_data;
        if (this == &source)
            return;
        if (capacity != source.capacity) {
            new_data = new seq[source.capacity];
            delete[]data;// delete the old data
            data = new_data;// make the new data the current data.
            capacity = source.capacity;
        }
        used = source.used;
    }

    template<typename seq>
    bool temp<seq>::operator==(const temp &s1) {
        if (capacity != s1.capacity)
            return false;
        if (used != s1.used)
            return false;
        for (int i = 0; i < used; i++) {
            if (data[i] != s1.data[i])
                return false;

            else
                return true;
        }
    }

    template<typename M>
    std::ostream& operator<<(std::ostream& out, const temp<M> data_one){
    for (int i = 0; i < data_one.used; i++) {
    out << data_one.used;
}

    return out;
}
template<typename M>
std::istream &operator>>(std::istream&&input, temp<M> &data_one){
    size_t capacity;
    input >> capacity;
    for (int i = 0; i < capacity; i++) {
        size_t value;
        input >> value;
        data_one.insert(value);

    }

    return input;
}

template<typename seq>
temp<seq> operator+(const temp<seq> &s1, const temp<seq> &s2) {
   const temp<seq> result(s1.size()+s2.size());
    result+=s1;
    result += s2;
    return result;

}

}







