#include "list.hpp"
#include "node.hpp"
#include <iostream>
#include <algorithm>
#include <cstdlib>


List::List()
{
      first = NULL;
      last = NULL;
}

List::List(int value)
{
        Node* temp = new Node;
        temp -> value = value;
        temp -> next = NULL;
        temp -> prev = NULL;
        first = temp;
        last = temp;
     
}


bool List::swap_el(int index1,int index2)
{
        if (!(check_index(index1) && check_index(index2))) {
                std::cout << "aystex karox e linel dzer govazdy " << std::endl;
                return false;
        }
        Node* temp = first;
        Node* temp2 = first;
        for(int i = 0; i < index1; ++i)
        {
                temp = temp ->next;
        }
        for(int i = 0; i < index2; ++i)
        {
                temp2 = temp2 ->next;
        }
        std::swap( temp -> value, temp2 -> value );
        return true;
}

bool List::set(int index,int data)
{
        if ( !check_index(index) ) {
                return false;
        }
        Node* temp = first;
        Node* to_add = new Node;
        to_add -> value = data;
        if(index == 0)
        {    
           to_add -> prev = NULL;
           to_add -> next = first;
           first -> prev = to_add;
           first = to_add;    
        } else {
                for(int i = 0; i < index ; ++i)
                {
                        temp = temp -> next;
                }
                to_add -> next = temp;
                to_add -> prev = temp -> prev;
                temp -> prev -> next = to_add;
                temp -> prev = to_add;               
        }
        return true;
}

List::~List()
{
        Node* temp = first;
        int i = 0;
        while(temp != NULL)
        {
                delete_el(i);
                temp = temp ->next;
                ++i;
        }

        std::cout << " Destructor List " << std::endl;
}

void List::add(int data)
{
        Node *to_add = new Node;
        to_add -> next = NULL;
        to_add -> value = data;
        if ( first == NULL ) { 
                first = to_add;
                first -> prev = NULL;
        } else {
                Node* cur;
                for ( cur = first; cur -> next != 0; cur = cur -> next);
                cur -> next = to_add;
                to_add -> prev = cur; 
        }
}

unsigned int List::search_index(int value)
{
        unsigned int index = 0;
        Node* temp;
        temp = first;
        while (temp -> value != value){
                ++index;
                temp = temp -> next;
                if ( temp == NULL ){
                        std::cout << "No element of such value.\n";
                        exit(1);
                }
        }
        return index;
}

bool List::check_index(unsigned int index)
{
        Node* temp;
        temp = first;
        int c = 0;        
        while (temp->next) {
                temp = temp -> next;
                ++c;
        }
        if ( index > c ) {
                return false;
        } else {
                return true;
        }
}
                        

int List::search_value(unsigned int index)
{
        Node* temp;
        temp = first;
        for (int i = 1; i <= index; ++i) {
                if ( temp == NULL ) {
                        std::cout << "Index is out of range\n";
                        exit(1);
                }
                temp = temp -> next;
        }
        return temp -> value;
}

void List::delete_el(int x) 
{
        Node *to_del=first;
        if (x==0) 
        {
                first=first->next;
                delete to_del;
        } else {
                Node *current=first;
                for(int i=0;i<x-1;i++)
                        current=current->next;
                to_del=current->next;
                current->next=current->next->next;
                delete to_del;
        }
}

void List::print()
{
        Node* temp = first;
        while(temp != NULL)
        {
                std::cout << temp -> value << "    ";
                temp = temp ->next;
        }
        std::cout << std::endl;
}

