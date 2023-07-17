#include "phone_book.h"
#include <iostream>
#include <cctype>
#include <iomanip>

// member variable initialization
Contact::Contact(std::string name, std::string phoneNumber, std::string nickname, bool isBookmarked)
    : name(name), phoneNumber(phoneNumber), nickname(nickname), isBookmarked(isBookmarked) {}

// initialization
/*
Contact::Contact(std::string name, std::string phoneNumber, std::string nickname, bool isBookmarked) {
    this->name = name;
    this->phoneNumber = phoneNumber;
    this->nickname = nickname;
    this->isBookmarked = isBookmarked;
}

*/

void Phonebook::add() {
    std::string name, phoneNumber, nickname, bookmark_status;
    std::cout << "Enter Name: ";
    std::cin.ignore();
    getline(std::cin, name);
    for (const auto &contact : contacts) {
        if (contact.name == name) {
            std::cout << "A contact with this name already exists.\n";
            return;
        }
    }

    std::cout << "Enter Phone number: ";
    std::cin >> phoneNumber;
    for (char c : phoneNumber) {
        if (!isdigit(c)) {
            std::cout << "Invalid input. Phone number must be digits only.\n";
            return;
        }
    }
    if (phoneMap.find(phoneNumber) != phoneMap.end()) {
        std::cout << "A contact with this phone number already exists.\n";
        return;
    }

    std::cout << "Enter Nickname: ";
    std::cin >> nickname;
    std::cout << "Bookmark Status(y/n): ";
    std::cin >> bookmark_status;

    contacts.push_back(Contact(name, phoneNumber, nickname, bookmark_status == "y"));
    phoneMap[phoneNumber] = contacts.size() - 1;
}

void Phonebook::search() {
    std::string query;
    std::cout << "Enter name, nickname, or phone number to search: ";
    std::cin >> query;

    for (const auto &contact : contacts) {
        if (contact.name == query || contact.nickname == query || contact.phoneNumber == query) {
            std::cout << "Name: " << contact.name << "\n";
            std::cout << "Nickname: " << contact.nickname << "\n";
            std::cout << "Phone number: " << contact.phoneNumber << "\n";
            return;
        }
    }

    std::cout << "No contact found with given name, nickname, or phone number.\n";
}


void Phonebook::remove() {
    std::string name;
    std::cout << "Enter name of the contact to remove: ";
    std::cin >> name;

    for (auto it = contacts.begin(); it != contacts.end(); ++it) {
        if (it->name == name) {
            contacts.erase(it);
            std::cout << "Contact removed.\n";
            return;
        }
    }

    std::cout << "No contact found with given name.\n";
}


void Phonebook::bookmark() {
    std::cout << std::left << std::setw(10) << "Index" << std::setw(20) << "Name" << std::setw(20) << "Nickname" << std::setw(20) << "Phone number" << "\n";
    for (const auto &contact : contacts) {
        if (contact.isBookmarked) {
            std::cout << std::left << std::setw(10) << &contact - &contacts[0]
                      << std::setw(20) << contact.name 
                      << std::setw(20) << contact.nickname 
                      << std::setw(20) << contact.phoneNumber << "\n";
    
         }
    }
}

