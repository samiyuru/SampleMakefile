#include "Book.h"

Book::Book(std::string title,
           std::string isbn,
           Author author) : title(title), isbn(isbn), author(author) {}

const std::string &Book::getTitle() const {
    return title;
}

const std::string &Book::getIsbn() const {
    return isbn;
}

const Author &Book::getAuthor() const {
    return author;
}
