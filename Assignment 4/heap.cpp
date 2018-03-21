//
// Created by tahsi on 7/29/2017.
//
#include "heap.h"
#include <iostream>
namespace tahsin_data_structures {


    bool heap::isheap(value_type max) {
        if (max >= heap_size / 2 && max <= heap_size) {
            return true;
        }
        else
            return false;
    }
    void heap:: swap(value_type value,value_type current ){
        int temp;
        temp=data[value];
        data[value]=data[current];
        data[current]=temp;
    }
    void heap::min_heapify(value_type current) {
        if(!isheap(current)){
            if(data[current]>data[left(current)]|| data[current]>data[right(current)]){
                if(data[left(current)]<data[right(current)]){
                    swap(current,left(current));//swap value for left child
                    min_heapify(left(current));
                }
                else{
                   swap(current,right(current)) ;// swap value for right child.
                    min_heapify(right(current));// min heapify both left and right child.
                }
            }
        }
    }
    void heap::min_heap() {
    for(int current=heap_size/2;current>=1;current--) {
        min_heapify(current);
    }

    }
    void heap::insert(value_type entry){
        if(heap_size==capacity){
            capacity++;
        }
        int temp=heap_size;
        while(data[temp]<data[parent(temp)]){
            swap(temp,parent(temp)) ;// swap with the parent value if it is smaller.
            temp=parent(temp);
        }

}
    size_t heap::delete_key() {
        int remove=data[DEFAULT_CAPACITY];
        data[DEFAULT_CAPACITY]=data[heap_size--];
        min_heapify(DEFAULT_CAPACITY);
        return remove;


    }



}
