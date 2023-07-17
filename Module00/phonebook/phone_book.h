#ifndef PHONE_BOOK_H
#define PHONE_BOOK_H

#include <string>
#include <vector>
#include <map>

class Contact {
public:
    std::string name;
    std::string phoneNumber;
    std::string nickname;
    bool isBookmarked;

    // parameter constructer
    Contact(std::string name, std::string phoneNumber, std::string nickname, bool isBookmarked);
};

class Phonebook {
private:
    std::vector<Contact> contacts;
    // key: std::string, value: int 
    std::map<std::string, int> phoneMap;

public:
    void add();
    void search();
    void remove();
    void bookmark();
};

#endif  // PHONE_BOOK_H
