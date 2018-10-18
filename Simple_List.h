
#include "Linked_List.h"

#ifndef SIMPLE_LIST_H
#define SIMPLE_LIST_H

template <class T>
class Simple_List {
private:
    node<T>* head_ptr;

public:
    //Constructor

    Simple_List() : head_ptr(nullptr) {
    }

    node<T>* insert_head(const T& item) {
        return ::insert_head(head_ptr, item);
    }

    node<T>* insert_before(node<T>* mark, const T& item) {
        return ::insert_before(head_ptr, mark, item);
    }

};
#endif /* SIMPLE_LIST_H */

