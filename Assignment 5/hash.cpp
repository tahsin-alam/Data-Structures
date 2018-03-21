//
// Created by tahsi on 8/1/2017.
//

#include "hash.h"
#include <iostream>
namespace tahsin_data_structures{

    hash::hash(int chain, int value) {
    this->chain=chain;
    this->value=value;
    this->get_next=NULL;

}
}