#include "queue.hpp"
#include "list.hpp"
#include "node.hpp"
#include <iostream>

int Queue::count = 0;

Queue::Queue()
        :List()
{
}

Queue::Queue(int v)
        :List(v)
{
        ++count;
}

void Queue::insert(int data)
{

        Node* to_add = new Node;
        to_add -> value = data;
        if ( first == NULL ) {
                first = to_add;
                first -> prev = NULL;
        } else {
                Node* current = new Node;
                to_add -> prev = last;
        }
        last = to_add;
        ++count;
}

void Queue::remove()
{
        Node* temp = last;
        while ( temp -> prev != first) {
                temp = temp -> prev;
        }
        delete first;
        first = temp;
        first -> prev = NULL;
        --count;        
}

void Queue::print_queue()
{
        Node* temp = last;
        while ( temp != NULL )
        {
                std::cout << temp -> value << std::endl;
                temp = temp -> prev;
        }
}
int Queue::size()
{
        return count;
}
