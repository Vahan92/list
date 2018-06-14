#include "stack.hpp"
#include "list.hpp"
#include "node.hpp"
#include "queue.hpp"
#include <iostream>

int main()
{
        /*List l(1);
        l.add(2);
        l.add(3);
        l.add(4);
        l.add(5);
        //std::cout << l.search_index(44) << "\n";
        //std::cout << l.search_value(2) << "\n";
        //std::cout << l.check_index(4) << "\n";
        l.delete_el(2);
        //l.delete_el(4); 
        l.print();  
        l.swap_el(1,3);
        l.print();
        l.swap_el(50,100);
        l.set(0,0);
        l.print();
        l.set(1,11);
        l.print();
        l.set(2,22);
        l.print();
        l.set(33, 33);
        l.print();*/
        Stack s(5);
        s.push(4);
        s.push(3);
        s.push(2);
        //s.~Stack();
        s.push(1);
        std::cout << "print stack" << std::endl;
        s.print_stack();
        std::cout<<"size of stack = "<<s.size()<<std::endl;
        s.pop();
        std::cout << "print stack" << std::endl;
        s.print_stack();
        s.pop();
        std::cout << "print stack" << std::endl;
        s.print_stack();
        std::cout <<"top of stack"<< s.top() << std::endl;
        std::cout<<"size of stack = "<<s.size()<<std::endl;
        s.size();
        /*
        Queue q(10);
        q.insert(9);
        q.insert(8);
        q.insert(7);
        q.print_queue();
        std::cout << "size = " << q.size() << std::endl;
        q.remove();
        q.insert(88);
        q.print_queue();
        std::cout << std::endl;
        q.remove();
        q.print_queue();
        std::cout << std::endl;
        q.remove();
        q.print_queue();
        std::cout << q.size() << std::endl;*/        
        return 0;
} 
