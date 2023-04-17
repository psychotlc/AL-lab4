#include <iostream>
#include <string>
#include "../hpp/Book.hpp"



bool book::operator<(book& Book){
    return (std::string(this->BookName) < std::string(Book.BookName));
}




std::ostream& operator<<(std::ostream& out, book& Book){
    out << "AuthorName: " <<  Book.AuthorName << "\nBookName: " <<Book.BookName << "\nPublisher: " << Book.publisher << "\nYear: " << Book.year << "\nPages: " << Book.Pages << std::endl;
    return out;
}
