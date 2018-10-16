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
    return 0;
}