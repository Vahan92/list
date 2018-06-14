#ifndef STACK_H
#define STACK_H
#include "node.hpp"
#include "list.hpp"
/**
 * @class stack
 * @brief stack of integer type
 */
class Stack : protected List 
{ 
        public:
                /**
                 * @name list
                 * @brief the default constructor of the class
                 */
                Stack ();

                /**
                 * @name list
                 * @brief the overloaded constructor of the class
                 * @param value is an integer type number, which is the value
                 * of the node
                 */
                Stack (int value);

                /**
                 * @name list
                 * @brief the destructor of the class
                 */
                //~Stack ();

                /**
                 * @name add
                 * @brief adds an element into the list
                 * @param index is an unsigned integer type number that points
                 * to the index where the element should be added
                 * @param value is an integer type number, which is the value
                 * of the added element
                 * @return doesn't return any value
                 */
                void push (int);

                 /**
                 * @name swap
                 * @brief swaps two given elements of the list
                 * @param first_index is an unsigned integer type number: the
                 * index of the first element
                 * @param second_index is an unsigned integer type number the
                 * index of the second element
                 * @return doesn't return any value
                 */
                void pop ();
                int size ();
                void print_stack();
                int top();
                static int count;
};

#endif

