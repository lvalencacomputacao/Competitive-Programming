#ifndef dynamic_stack_h
#define dynamic_stack_h

#include <iostream>
#include <cstddef> // null

const int max_itens = 100;

template<typename T>
class Node {
public:
    Node();
    ~Node();
    T val();
    Node<T>* prev();
    void setPrev(Node<T>* node);
    void setVal(T val);
private:
    T val_;
    Node<T>* prev_;
};

template<typename T>
class Stack {
public:
    Stack();
    ~Stack();
    bool empty();
    bool full();
    int size();
    void push(T x);
    T pop();
    void print();
private:
    Node<T>* last;
    int size_;
};

// Stack
template<typename T>
Stack<T>::Stack() {
    this->last = NULL;
    this->size_ = 0;
}

template<typename T>
Stack<T>::~Stack() {
    Node<T>* tmp;
    while (this->last) {
        tmp = this->last;
        this->last = this->last->prev();
        delete tmp;
    }
}

template<typename T>
bool Stack<T>::empty() {
    return (this->size_ == 0);
}

template<typename T>
bool Stack<T>::full() {
    return (this->size_ == max_itens);
}

template<typename T>
int Stack<T>::size() {
    return (this->size_);
}

template<typename T>
void Stack<T>::push(T x) {
    if (!this->full()) {
        Node<T>* new_node = new Node<T>;
        new_node->setPrev(this->last);
        new_node->setVal(x);
        this->last = new_node;
        this->size_++;
    } else {
        std::cout << "Full Stack Error\n";
    }
}

template<typename T>
T Stack<T>::pop() {
    if (!this->empty()) {
        Node<T>* node = this->last;
        T item = node->val();
        this->last = node->prev();
        this->size_--;
        return item;
    } else {
        std::cout << "Empty Stack Error\n";
        return -1;
    }
}

template<typename T>
void Stack<T>::print() {
    Node<T>* node = this->last;
    std::cout << "Stack = [ ";
    while (node) {
        std::cout << node->val() << " ";
        node = node->prev();
    }
    std::cout << "]\n";
}

// Node
template<typename T>
Node<T>::Node() {
    this->val_ = -1;
    this->prev_ = NULL;
}

template<typename T>
Node<T>::~Node() {
    delete this;
}

template<typename T>
T Node<T>::val() {
    return this->val_;
}

template<typename T>
Node<T>* Node<T>::prev() {
    return this->prev_;
}

template<typename T>
void Node<T>::setPrev(Node<T>* prev) {
    this->prev_ = prev;
}

template<typename T>
void Node<T>::setVal(T val) {
    this->val_ = val;
}

#endif