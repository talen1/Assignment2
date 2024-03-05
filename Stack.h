#ifndef STACK_H
#define STACK_H

#include <vector>
#include <stdexcept>

class Stack {
public:
    bool isEmpty() const;
    void push(int item);
    int pop();
    int top() const;
    double average() const;

private:
    std::vector<int> elements;
};

#endif // STACK_H
