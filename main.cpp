// self-practice delete

#include "Linked_List.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    cout << endl << endl << "=====================" << endl;
    node<int>* head_ptr = nullptr; //Forget this == 20 hours of debugging

    //test insert_head()
    for (int i = 0; i < 10; i++) {
        insert_head(head_ptr, i * 10);
        print_list(head_ptr);
    }
    cout << endl << endl << "=====================" << endl;

    node<int>* found_it = find(head_ptr, 22);
    if (found_it != nullptr)
        cout << "\nfound: " << found_it->_item << endl;
    else {
        cout << "\nnot found." << endl;
    }

    cout << endl << endl << "=====================" << endl;

    node<int>* insert_it = head_ptr->_next;

    cout << "demo for insert after" << endl;
    insert_after(head_ptr, insert_it, 82);
    print_list(head_ptr);
    cout << endl << endl << "=====================" << endl;

    cout << "demo for insert before" << endl;
    insert_before(head_ptr, insert_it, 88);
    print_list(head_ptr);
    cout << endl << endl << "=====================" << endl;

    cout << "demo for delete node" << endl;
    delete_node(head_ptr, insert_it);
    print_list(head_ptr);
    cout << endl << endl << "=====================" << endl;

    cout << "demo for delete head" << endl;
    delete_head(head_ptr);
    print_list(head_ptr);
    cout << endl << endl << "=====================" << endl;




    return 0;
}