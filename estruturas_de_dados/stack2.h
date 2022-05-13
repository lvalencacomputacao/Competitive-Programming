#ifndef stack2_h
#define stack2_h

#include <iostream>

const int max_itens = 100;

#endif

template<typename T>
class Stack {
public:
    Stack();
    ~Stack();
    void push(T x);
    T pop();
    bool empty();
    bool full();
    int size();
    void print();
private:
    int size_;
    T* contents;
};

template<typename T>
Stack<T>::Stack() {
    this->size_ = 0;
    this->contents = new T[max_itens];
}

template<typename T>
Stack<T>::~Stack() {
    delete [] this->contents;
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
    return this->size_;
}

template<typename T>
void Stack<T>::push(T x) {
    if (!this->full()) {
        this->contents[this->size_] = x;
        this->size_++;
    }
    else {
        std::cout << "Full stack error\n";
    }
}

template<typename T>
T Stack<T>::pop() {
    if (!this->empty()) {
        T item = this->contents[this->size_-1];
        this->size_--;
        return item;
    } else {
        std::cout << "Empty stack error\n";
        return -1;
    }
}

template<typename T>
void Stack<T>::print() {
    std::cout << "Stack = [ ";
    for (int i = 0; i < this->size_; i++) {
        std::cout << this->contents[i] << " ";
    }
    std::cout << "]\n";
}