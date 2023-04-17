#include <iostream>
#include <list>
#include <vector>
#include "../hpp/Book.hpp"

using namespace std;

void write();
void read();

int main(int argc, char* argv[]){
    if(string(argv[1]) == "write") write();
    if(string(argv[1]) == "read") read();
    
    return 0;
}

