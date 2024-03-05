#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

#include <stddef.h> // For size_t

template <typename Item_Type>
class Single_Linked_List {
public:
    // Constructor
    Single_Linked_List();

    // Destructor
    ~Single_Linked_List();


    // Member functions
    void push_front(const Item_Type& item);
    void push_back(const Item_Type& item);
    void pop_front();
    void pop_back();
    Item_Type& front();
    Item_Type& back();
    bool empty() const;
    void insert(size_t index, const Item_Type& item);
    bool remove(size_t index);
    size_t find(const Item_Type& item) const;

private:
    // Internal struct for list nodes
    struct Node {
        Item_Type data;
        Node* next;
        Node(const Item_Type& data_item, Node* next_ptr = nullptr) : data(data_item), next(next_ptr) {}
    };

    Node* head;
    Node* tail;
    size_t num_items;

    // Utility functions
    void clear();
};

#endif // SINGLE_LINKED_LIST_H
