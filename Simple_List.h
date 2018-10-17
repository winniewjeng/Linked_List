
#include "Linked_List.h"

#ifndef SIMPLE_LIST_H
#define SIMPLE_LIST_H

template <class T>
class Simple_List{
    
    Simple_List():head_ptr(nullptr){}
    node<T>* insert_head(const T& item){
        return ::insert_head(head_ptr, item);
    }
    
    
    private:
        node<T>* head_ptr;
};





#endif /* SIMPLE_LIST_H */

