// self-practice delete

#include "Linked_List.h"
#include "Simple_List.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    cout << endl << endl << "=====================" << endl;
    node<int>* head_ptr = nullptr; //Forget this == 20 hours of debugging

    //test insert_head()
    cout << "demo for insert head" << endl;
    for (int i = 0; i < 10; i++) {
        insert_head(head_ptr, i * 10);
        print_list(head_ptr);
    }
    cout << endl << endl << "=====================" << endl;

    node<int>* found_it = search_list(head_ptr, 20);
    if (found_it != nullptr)
        cout << "\nfound: " << found_it->_item << endl;
    else {
        cout << "\nnot found." << endl;
    }

    cout << endl << endl << "=====================" << endl;

    node<int>* insert_it = head_ptr->_next;

    cout << "demo for insert after mark " << insert_it->_item << endl;
    insert_after(head_ptr, insert_it, 75);
    print_list(head_ptr);
    cout << endl << endl << "=====================" << endl;

    cout << "demo for insert before" << endl;
    insert_before(head_ptr, insert_it, 88);
    print_list(head_ptr);
    cout << endl << endl << "=====================" << endl;


    cout << "demo for delete node " << insert_it->_item << endl;
    delete_node(head_ptr, insert_it);
    print_list(head_ptr);
    cout << endl << endl << "=====================" << endl;

    cout << "demo for delete head" << endl;
    delete_head(head_ptr);
    print_list(head_ptr);
    cout << endl << endl << "=====================" << endl;

    cout << "demo for clear list" << endl;
    clear_list(head_ptr);
    print_list(head_ptr);
    cout << endl << endl << "=====================" << endl;

    cout << "demo for insert head" << endl;
    for (int i = 0; i < 10; i++) {
        insert_head(head_ptr, i);
        print_list(head_ptr);
    }
    cout << endl << endl << "=====================" << endl;

    cout << "demo for at" << endl;
    cout << At(head_ptr, 1) << endl;

    cout << endl << endl << "=====================" << endl;
    cout << "demo for insert sort" << endl;
    InsertSorted(head_ptr, 7, true);
    print_list(head_ptr);
    
    cout << endl << endl << "=====================" << endl;
    cout << "demo for copy list" << endl;
    node<int>* copy = nullptr;
    copy = copy_list(head_ptr);
    print_list(copy);
    
    


    return 0;
}