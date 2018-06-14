#ifndef QUEUE_H
#define QUEUE_H
#include "list.hpp"

class Queue: protected List
{
        public:
                Queue();
                Queue(int);
                void insert(int);
                void remove();
                int size();
                void print_queue();

                static int count;
};

#endif
