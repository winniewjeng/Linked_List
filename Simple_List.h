
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

    //Copy constructor

    Simple_List(const Simple_List& other) {
        head_ptr = nullptr;
        copy_list(head_ptr);
    }

    //Destructor

    ~Simple_List() {
        clear_list(head_ptr);
    }

    //Assignment operator

    Simple_List& operator=(const Simple_List& RHS) {
        //self-check
        if (this == RHS) {
            return *this;
        }
        //clean up the dynamic memory of LHS
        clear_list(head_ptr);
        //instantiate the LHS again
        head_ptr = nullptr;
        //copy the junk over
        copy_list(head_ptr);
        //return
        return *this;

    }

    node<T>* insert_head(const T& item) {
        return::insert_head(head_ptr, item);
    }

    node<T>* insert_before(node<T>* mark, const T& item) {
        return::insert_before(head_ptr, mark, item);
    }

    node<T>* insert_after(node<T>* mark, const T& item) {
        return::insert_after(head_ptr, mark, item);
    }

    //insert i. Assume sorted list
    //QUESTION -- Is my argument for insertSorted correct?
    node<T>* InsertSorted(T i) {
        return::InsertSorted(head_ptr, i);
    }

    //delete node pointed to by iMarker
    T Delete(node<T>* iMarker) {
        return::delete_node(iMarker);
    }

    node<T>* PreviousNode(node<T>* prevToThis) {
        return::PreviousNode(head_ptr, prevToThis);
    }



};
#endif /* SIMPLE_LIST_H */

