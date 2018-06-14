#include "stack.hpp"
#include "list.hpp"
#include "node.hpp"
#include <iostream>

int main()
{
        List l(1);
        l.add(2);
        l.add(3);
        l.add(4);
        l.add(5);
        //std::cout << l.search_index(44) << "\n";
        //std::cout << l.search_value(2) << "\n";
        //std::cout << l.check_index(4) << "\n";
        l.delete_el(2);
        //l.delete_el(4); 
        l.print_list ();  
        l.swap_el(1,3);
        l.print_list();
        l.swap_el(50,100);
        l.set(0,0);
        l.print_list();
        l.set(1,11);
        l.print_list();
        l.set(2,22);
        l.print_list();
        l.set(33, 33);
        l.print_list();
        Stack s(5);
        s.push(4);
        s.push(3);
        s.push(2);
        s.push(1);
        s.print_stack();
        s.pop();
        std::cout << std::endl;
        s.print_stack();
        s.pop();
        std::cout << std::endl;
        s.print_stack();
                
        return 0;
} 
