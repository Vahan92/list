#ifndef LIST_H
#define LIST_H
#include "node.hpp"

/**
 * @class list
 * @brief list of integer type
 */
class List 
{ 
        protected:
                node* first;
                node* last;
        public:
                /**
                 * @name list
                 * @brief the default constructor of the class
                 */
                List ();

                /**
                 * @name list
                 * @brief the overloaded constructor of the class
                 * @param value is an integer type number, which is the value
                 * of the node
                 */
                List (int value);

                /**
                 * @name list
                 * @brief the destructor of the class
                 */
                ~List ();

                /**
                 * @name add
                 * @brief adds an element into the list
                 * @param index is an unsigned integer type number that points
                 * to the index where the element should be added
                 * @param value is an integer type number, which is the value
                 * of the added element
                 * @return doesn't return any value
                 */
                void add ( int value);

                /**
                 * @name remove
                 * @brief removes the given element of the list
                 * @param index is an unsigned integer type number that points
                 * to the index of the element that should be removed
                 * @return doesn't return any value
                 */
                void remove (unsigned int index);

                bool swap_el(int index1,int index2);

                bool check_index(unsigned int index);

                /**
                 * @name search_index
                 * @brief finds the index of the element by its value
                 * @param value is an integer type number, which is the value
                 * of the searched element
                 * @return returns an unsigned integer type number which is the
                 * index of the searched element
                 */
                unsigned int search_index (int value);

                /**
                 * @name search_value
                 * @brief finds the value of the element by its index
                 * @param index is an unsigned integer type number, which is
                 * the index of the searched element
                 * @return returns an integer type number, which is the value
                 * of the searched element
                 */
                int search_value (unsigned int index);

                /**
                 * @name swap
                 * @brief swaps two given elements of the list
                 * @param first_index is an unsigned integer type number: the
                 * index of the first element
                 * @param second_index is an unsigned integer type number the
                 * index of the second element
                 * @return doesn't return any value
                 */
                void delete_el (int index);

                bool set(int index,int data);
                void print_list();
};

#endif

