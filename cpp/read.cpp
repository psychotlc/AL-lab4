#include <iostream>
#include <fstream>
#include <list>
#include <vector>
#include <algorithm>
#include "../hpp/Book.hpp"

void read(){
    std::ifstream input("src/input.dat", std::ios_base::binary);
    std::ofstream output("src/output.txt");
    input.seekg(0, std::ios_base::end);
    int size = input.tellg();
    input.seekg(0, std::ios_base::beg);
    book tmp;

    std::list <book> BookList;

    for (int i = 0; i < size / sizeof(book); i++){
        input.read((char*)&tmp, sizeof(tmp));
        BookList.push_back(tmp);
    }

    std::vector <book> BookVector;
    std::copy(BookList.begin(), BookList.end(), std::back_inserter(BookVector));
    BookList.sort();

    for (auto it = BookVector.begin(); it != BookVector.end(); it++) output<<(*it) << std::endl;
    for (auto it = BookList.begin(); it != BookList.end(); it++) output << (*it) << std::endl;

    input.close();
    output.close();
}