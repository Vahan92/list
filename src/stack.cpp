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
        Node* temp = new Node;
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
        Node *to_add = new Node;
        to_add -> prev = last;
        to_add -> value = data;
        last = to_add;
}

void Stack::pop() 
{
        //Node *to_del = last;
        if ( last == NULL ) {
                std::cout << "Stack is empty" << std::endl;
        } else {
                Node* temp = last -> prev;
                delete last;
                last = temp;              
        }
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
        int count = 0;
        Node* temp = last;
        while(temp != NULL)
        {
                temp = temp -> prev;
                ++count;
        }
        return count;
}

Node* Stack::top()
{
        return last;
}
