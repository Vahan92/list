#include "stack.hpp"
#include "node.hpp"
#include <iostream>
#include <algorithm>
#include <cstdlib>


Stack::Stack()
        :List()
{
}

Stack::Stack(int value)
{
        node* temp = new node;
        temp -> value = value;
        temp -> prev = NULL;
        first = temp;
        last = temp;
     
}

Stack::~Stack()
{
        std::cout << " DESTRUCTOR " << std::endl;
}

void Stack::push(int data)
{
        node *to_add = new node;
        to_add -> prev = last;
        to_add -> value = data;
        last = to_add;
}

void Stack::pop() 
{
        //node *to_del = last;
        if ( last == NULL ) {
                std::cout << "Stack is empty" << std::endl;
        } else {
                node* temp = last -> prev;
                delete last;
                last = temp;              
        }
}

void Stack::print_stack()
{
        node* temp = last;
        while(temp != NULL)
        {
                std::cout << temp -> value << std::endl;
                temp = temp -> prev;
        }
}

int Stack::size()
{
        int count = 0;
        node* temp = last;
        while(temp != NULL)
        {
                temp = temp -> prev;
                ++count;
        }
        return count;
}

node* Stack::top()
{
        return last;
}
