#ifndef PROGRAM_BOOK_H
#define PROGRAM_BOOK_H

#include <string>
#include "Author.h"

class Book {
public:
    Book(std::string title, std::string isbn, Author author);

    const std::string &getTitle() const;

    const std::string &getIsbn() const;

    const Author &getAuthor() const;

private:
    std::string title;
    std::string isbn;
    Author author;
};

#endif
