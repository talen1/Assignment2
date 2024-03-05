#include "SingleLinkedList.h"
#include <stdexcept>

template <typename Item_Type>
Single_Linked_List<Item_Type>::Single_Linked_List() : head(nullptr), tail(nullptr), num_items(0) {}

template <typename Item_Type>
Single_Linked_List<Item_Type>::~Single_Linked_List() {
    clear();
}

template <typename Item_Type>
void Single_Linked_List<Item_Type>::clear() {
    while (head != nullptr) {
        Node* old_head = head;
        head = head->next;
        delete old_head;
    }
    tail = nullptr;
    num_items = 0;
}

// Implement other member functions here

template <typename Item_Type>
void Single_Linked_List<Item_Type>::push_front(const Item_Type& item) {
    Node* new_node = new Node(item, head);
    head = new_node;
    if (tail == nullptr) {
        tail = head;
    }
    num_items++;
}

