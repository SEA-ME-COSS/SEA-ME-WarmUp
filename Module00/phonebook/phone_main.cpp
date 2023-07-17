#include "phone_book.h"
#include <iostream>

int main() {
    std::string command;
    Phonebook phonebook;

    while (command != "EXIT") {
        std::cout << "Enter command (ADD, SEARCH, REMOVE, BOOKMARK, EXIT): ";
        std::cin >> command;

        if (command == "ADD") {
            phonebook.add();
        } else if (command == "SEARCH") {
            phonebook.search();
        } else if (command == "REMOVE") {
            phonebook.remove();
        } else if (command == "BOOKMARK") {
            phonebook.bookmark();
        } else if (command != "EXIT") {
            std::cout << "Invalid command!" << std::endl;
        }
    }

    return 0;
}
