#ifndef BOOK
#define BOOK
#include <string>

class book{
    friend void setBook(book& Book);
    friend std::ostream& operator<<(std::ostream& out, book& Book);
private:
    char AuthorName[20];
    char BookName[20];
    char publisher[20];
    int year;
    int Pages;
public:
    bool operator<(book& Book);
};

std::ostream& operator<<(std::ostream& out, book& Book);

#endif