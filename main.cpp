#include "Stack.h"
#include "SingleLinkedList.h"

int main() {
    // Demonstrate Stack functionality
    Stack myStack;
    std::cout << "Stack operations:" << std::endl;
    myStack.push(10);
    myStack.push(20);
    std::cout << "Top element: " << myStack.top() << std::endl;
    std::cout << "Average of stack: " << myStack.average() << std::endl;
    myStack.pop();
    std::cout << "After pop, top element: " << myStack.top() << std::endl;

    // Demonstrate Single_Linked_List functionality
    Single_Linked_List<int> myList;
    std::cout << "\nSingle Linked List operations:" << std::endl;
    myList.push_front(1);
    myList.push_back(2);
    std::cout << "Front element: " << myList.front() << std::endl;
    std::cout << "Back element: " << myList.back() << std::endl;
    myList.pop_front();
    std::cout << "After pop_front, front element: " << myList.front() << std::endl;

    return 0;
}
