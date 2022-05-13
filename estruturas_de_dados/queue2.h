#ifndef queue2_h
#define queue2_h

#include <iostream>

const int max_itens = 100;

template<typename T>
class Queue {
public:
    Queue();
    ~Queue();
    T front();
    T back();
    bool empty();
    bool full();
    int size();
    void push(T x);
    T pop();
    void print();
private:
    int first, last;
    T* contents;
};

template<typename T>
Queue<T>::Queue() {
    this->first = 0;
    this->last = 0;
    this->contents = new T[max_itens];
}

template<typename T>
Queue<T>::~Queue() {
    delete [] this->contents;
}

template<typename T>
T Queue<T>::front() {
    return this->contents[this->first];
}

template<typename T>
T Queue<T>::back() {
    return this->contents[this->last-1];
}

template<typename T>
bool Queue<T>::full() {
    return (this->last - this->first == max_itens);
}

template<typename T>
bool Queue<T>::empty() {
    return (this->first == this->last);
}

template<typename T>
int Queue<T>::size() {
    return this->size_;
}

template<typename T>
void Queue<T>::push(T x) {
    if (!this->full()) {
        this->contents[this->last%max_itens] = x;
        this->last++;
    } else {
        std::cout << "Full queue error\n";
    }
}

template<typename T>
T Queue<T>::pop() {
    if (!this->empty()) {
        T item = this->contents[this->first%max_itens];
        this->first++;
        return item;
    } else {
        std::cout << "Empty queue error\n";
    }
}

template<typename T>
void Queue<T>::print() {
    std::cout << "Queue = [ ";
    for (int i = this->first; i < this->last; i++) {
        std::cout << this->contents[i%max_itens] << " ";
    }
    std::cout << "]\n";
}

#endif