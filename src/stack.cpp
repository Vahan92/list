#include "stack.hpp"
#include "node.hpp"
#include <iostream>
#include <algorithm>
#include <cstdlib>

int Stack::count = 0;

Stack::Stack()
        :List()
{
}

Stack::Stack(int v)
        :List(v)
{
        ++count;
}

/*Stack::~Stack()
{
 
        std::cout << " DESTRUCTOR Stack " << std::endl;//????
}*/

void Stack::push(int data)
{
        Node *to_add = new Node;
        to_add -> prev = last;
        to_add -> value = data;
        last = to_add;
        ++count;
}

void Stack::pop() 
{
        if ( last == NULL ) {
                std::cout << "Stack is empty" << std::endl;
        } else {
                Node* temp = last -> prev;
                std::cout << "last deleted element - " <<  last -> value << std::endl;
                delete last;
                last = temp;              
        }
        --count;
}

void Stack::print_stack()
{
        Node* temp = last;
        while(temp != NULL)
        {
                std::cout << temp -> value << std::endl;
                temp = temp -> prev;
        }        
}

int Stack::size()
{
        return count;
}

int Stack::top()
{
        return last -> value;
}
