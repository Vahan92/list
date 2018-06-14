#include "list.hpp"
#include "node.hpp"
#include "stack.hpp"
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

std::string read_file()
{
        std::ifstream in_file;
        in_file.open("input.txt");
        if ( ! in_file.is_open() ) {
                std::cerr << "couldn't open the file" << std::endl;
        }
        std::string data;
        in_file >> data;
        in_file.close();
        return data;
}

bool testing()
{
        Stack s(7);
        s.push(9);
        std::string data =  read_file();
        int value = data[0] - '0';       
        std::ofstream out_file;
        out_file.open("push_test.txt");
        if ( ! out_file.is_open() ) {
                std::cerr << "couldn't open the file" << std::endl;
        }
        s.push(value);
        std::cout << last << std::endl;
        /*if ( value == l
                {
                std::cout << " yes " << std::endl;
                out_file << "test1 passed" << std::endl;
        } else {
                std::cout << " no " << std::endl;
                out_file << "test1 failed" << std::endl;
        }*/
        out_file.close();
}

int main()
{
        testing();
        return 0;
}
