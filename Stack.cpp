#include "Stack.h"

bool Stack::isEmpty() const {
    return elements.empty();
}

void Stack::push(int item) {
    elements.push_back(item);
}

int Stack::pop() {
    if (isEmpty()) {
        throw std::out_of_range("Stack::pop(): pop from empty stack");
    }
    int topElement = elements.back();
    elements.pop_back();
    return topElement;
}

int Stack::top() const {
    if (isEmpty()) {
        throw std::out_of_range("Stack::top(): top from empty stack");
    }
    return elements.back();
}

double Stack::average() const {
    if (isEmpty()) {
        return 0.0;
    }
    double sum = 0.0;
    for (int elem : elements) {
        sum += elem;
    }
    return sum / elements.size();
}
