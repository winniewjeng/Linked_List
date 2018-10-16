// SELF-PRACTICE
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <iostream>
using namespace std;

template <typename T>
//node is a 2-part struct, consisting of item and node pointer
struct node {
    T _item;
    node<T>* _next;

    //constructor

    //    node(const T& item = T(), node<T>* next = nullptr) :
    //    _item(item), _next(next) {
    //    }

    node(const T& item = T(), node<T> *next = nullptr) {
        _item = item;
        _next = next;
    }

    //    node<T>& operator[](int index) const {
    //        node<T>* walker = head_ptr;
    //    }

};

template<typename T>
//insert_head takes in the address of head_ptr and item to populate the new head node
//and returns the address of the new head_ptr
node<T>* insert_head(node<T>* &head_ptr, const T& item) {
    //1. create a new node named temp
    //2. temp's next points to the head_ptr
    //3. point head_ptr to where temp is pointing to
    //4. return head_ptr

    node<T>* temp = new node<T>(item);
    temp->_next = head_ptr;
    head_ptr = temp;
    return head_ptr;

}

template<typename T>
//insert_before takes in the address of the mark, and create a new node before the 
//mark and populate the new node with item and returns the address of the new node ptr
node<T>* insert_before(node<T>* head_ptr, node<T>* mark, const T& item) {
    //1. create a new node named new_node, populated with item
    //2. get a walker to traverse down the linked list to node where the _next points to mark
    //3. the node whose _next pointed to mark now points to new_node
    //5. new_node's _next points to mark
    //6. return insert_ptr
    node<T>* new_node = new node<T>(item);
    node<T>* walker = head_ptr;
    while (walker != nullptr) {
        if (walker->_next == mark) {
            walker->_next = new_node;
            new_node->_next = mark;
        }
        walker = walker->_next;
    }
    return new_node;
}

template<typename T>
//insert_after takes in the address of the mark, and create a new node after the 
//mark and populate the new node with item and returns the address of the new node ptr
node<T>* insert_after(node<T>* head_ptr, node<T>* mark, const T& item) {
    //1. create a new node named new_node, populated with item
    //2. get a walker to traverse down the linked list and find the node that equals to mark
    //3. new_node's _next points to mark's _next
    //4. mark's _next now points to new_node
    //5. return new_node

    //Do you really need to pass in the head_ptr for the insert_after function??

    node<T>* new_node = new node<T>(item);
    new_node->_next = mark->_next;
    mark->_next = new_node;
    //    node* walker = head_ptr;
    //    while (walker != nullptr) {
    //        if (walker == mark) {
    //            new_node->_next = mark->_next;
    //            mark->_next = new_node;
    //        }
    //        walker = walker->_next;
    //    }

    return new_node;
}

template<typename T>
//get a walker and traverse down the linked list and print out the items in the list
void print_list(node<T>* head_ptr) {
    //1. get a walker
    //2. keep walking down linked list as long as walker != nullptr
    //3. output
    node<T>* walker = head_ptr;
    while (walker != nullptr) {

        cout << " [" << walker->_item << "] -->";
        //traverse the walker down. New syntax!
        walker = walker->_next;
    }
    cout << "|||" << endl;
}

template<typename T>
//delete the node from linked list and return the item in node
T delete_node(node<T>* head_ptr, node<T>* mark) {
    //1. get a walker to traverse down the linked list & find mark
    //2. when node._next == mark is found:
    //3. store the item in temp T
    //4. node._next = mark._next
    //5. no need of garbage collection?

    T temp_item;
    node<T>* walker = head_ptr;
    while (walker != nullptr) {
        if (walker->_next == mark) {
            temp_item = mark->_item;
            walker->_next = mark->_next;
        }
        walker = walker->_next;
    }

    return temp_item;
}

template<typename T>
//find an item in linked list. Return the address of the node where item is found
node<T>* find(node<T>* head_ptr, const T& item) {
    //1. get a walker to traverse down the linked list
    //2. if ._item == item, return the walker as it's on that node
    
    node<T>* walker = head_ptr;
    while(walker != nullptr) {
        if (walker->_item == item) {
            return walker;
        }
        walker = walker->_next;
    }
    
    //what does it return if nothing is found?
}

#endif /* LINKED_LIST_H */

