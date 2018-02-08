#include <iostream>
#include <fstream>
#include "Book.h"

const int PROGRAM_RETURN = 0;

void printBookInfo(Book &book);

int main(int argc, char *argv[]) {
    std::cout << "Initializing 2 Books..\n\n";

    Book book1("Effective Modern C++",
               "978-1491903995",
               Author("Scott Meyers", "scott@email.com"));

    printBookInfo(book1);

    Book book2("The C++ Programming Language",
               "978-0321958327",
               Author("Bjarne Stroustrup", "bjarne@email.com"));

    printBookInfo(book2);

    return PROGRAM_RETURN;
}

void printBookInfo(Book &book) {
    std::cout << book.getTitle() << " by " << book.getAuthor().name << "\n";
    std::cout << '\t' << "Author email: " << book.getAuthor().email << "\n";
    std::cout << '\t' << "ISBN: " << book.getIsbn() << "\n\n";
}
