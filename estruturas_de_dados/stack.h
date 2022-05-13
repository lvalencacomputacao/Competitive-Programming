#ifndef stack_h
#define stack_h

typedef int TipoItem;
const int max_itens = 100;

#include <iostream>
using namespace std;

class Stack {
public:
    Stack();
    ~Stack();
    bool is_empty();
    bool is_full();
    void push(TipoItem x);
    TipoItem pop();
    void print();
    int size();
private:
    int size_;
    TipoItem* contents;
};

Stack::Stack() {
    this->size_ = 0;
    this->contents = new TipoItem[max_itens];
}

Stack::~Stack() {
    delete [] this->contents;
}

bool Stack::is_empty() {
    return (this->size_ == 0);
}

bool Stack::is_full() {
    return (this->size_ == max_itens);
}

void Stack::push(TipoItem x) {
    if (!this->is_full()) {
        this->contents[size_] = x;
        this->size_++;
    } else {
        cout << "The stack is full!\n";
        cout << "It's not possible to insert a new element\n";
    }
}

TipoItem Stack::pop() {
    if (!this->is_empty()) {
        TipoItem item = this->contents[size_-1];
        size_--;
        return item;
    } else {
        cout << "The stack is empty!\n";
        cout << "It's not possible to remove an element\n";
        return -1;
    }
}

void Stack::print() {
    cout << "Stack: [ ";
    for (int i = 0; i < this->size_; i++) {
        cout << this->contents[i] << " ";
    }
    cout << "]\n";
}

int Stack::size() {
    return this->size_;
}


#endif