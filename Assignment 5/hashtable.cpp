//
// Created by tahsi on 8/1/2017.
//
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include "hashtable.h"
namespace tahsin_data_structures{
    hashtable::hashtable()
    {
        data= new hash*[DEFAULT_CAPACITY];
        for(int i=0; i<DEFAULT_CAPACITY;i++){
            data[i]=NULL;

        }
    }
hashtable::~hashtable() {
    for (int i = 0; i < DEFAULT_CAPACITY; ++i)
    {
        hash* enter = data[i];
        while (enter != NULL)
        {
            hash* prev = enter;
            //enter next avialable data
            delete prev;//return the previous data to heap.
        }
    }
    delete[] data;
}

    size_t hashtable::hash_function(value_type holder) {
        return holder%DEFAULT_CAPACITY;
    }

    void hashtable::insert(hashtable::value_type chain, value_type value) {
        int hash_value=hash_function(chain);
        hash* enter=data[hash_value];
        hash* prev=NULL;
        while (enter!=NULL)
        {
            prev=enter;
            enter=enter->get_next;
        }
        if(enter==NULL)
        {
            enter==new hash(chain, value);

            if(prev==NULL)
            {
                data[hash_value]=enter;

            }
            else
            {
                prev->get_next=enter;
            }
        }
        else
        {
            enter->value=value;

            }


        }

    void hashtable::delete_key(hashtable::value_type value) {
        int hash_value=hash_function(value);
        hash* enter= data[hash_value];
        hash *prev= NULL;
        if(enter==NULL || enter->value!=value)
        {
            return;
        }
        while(enter->get_next!=NULL)
        {
            prev=enter;
            enter=enter->get_next;
        }
        if(prev!=NULL)
        {
            prev->get_next=enter->get_next;

        }
            delete enter;// element deleted.

    }

    void hashtable::resize() {
        int old_capacity=cap;
        cap=cap*2;
        max_size=(int) (cap*hold);
        hash ** old_table=data;
        data= (hash **) new hash **[cap];
        for(int i=0; i<cap;i++)
            data[i]=NULL;
        size=0;
        for(int rehash=0;rehash<old_capacity; rehash++)
            if(old_table[rehash]!=NULL){
                hash* old_entry;
                hash* entry=old_table[rehash];
                while(entry!=NULL)
                {
                    old_entry=entry;
                    entry=entry->get_next;
                    delete old_entry;

                }

            }
    delete [] old_table;

            }

    size_t hashtable::search(value_type chain) {
        int hash_value = hash_function(chain);
        if (data[hash_value] == NULL)
            return -1;
        else {
            hash *enter = data[hash_value];
            while (enter != NULL && enter->chain != chain)
                enter = enter->get_next;
            if (enter == NULL)
                return -1;
            else
                return enter->value;

        }
    }
    }






