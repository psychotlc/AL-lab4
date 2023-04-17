#include <iostream>
#include <fstream>
#include <cstring>
#include "../hpp/Book.hpp"

using namespace std;

void setBook(book& Book);

void write(){
    ofstream file("src/input.dat", ios_base::binary | ios_base::app);

    int n;
    book tmp;
    cout << "Enter count of books: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        setBook(tmp);
        file.write((char*)&tmp, sizeof(tmp));
    }
}

void setBook(book& Book){
    string tmp;
    cout << "Enter Author name: ";
    cin >> tmp;
    strcpy(Book.AuthorName, tmp.c_str());
    cout << "Enter Book name: ";
    cin >> tmp;
    strcpy(Book.BookName, tmp.c_str());
    cout << "Enter publisher: ";
    cin >> tmp;
    strcpy(Book.publisher, tmp.c_str());
    cout << "Enter year: ";
    cin >> Book.year;
    cout << "Enter pages: ";
    cin >> Book.Pages;
    cout << endl;
}