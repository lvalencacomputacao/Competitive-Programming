#ifndef queue_h
#define queue_h

typedef int TipoItem;
const int max_itens = 100; 

#include <iostream>

using namespace std;

class Queue {
public:
    Queue();
    ~Queue();
    bool is_full();
    bool is_empty();
    TipoItem front();
    TipoItem back();
    void push(TipoItem x);
    TipoItem pop();
    void print();
    int size();
private:
    int first, last;
    TipoItem* contents;
};

Queue::Queue() {
    this->last = 0;
    this->first = 0;
    this->contents = new TipoItem[max_itens];
}

Queue::~Queue() {
    delete [] this->contents;
}

bool Queue::is_full() {
    return (this->last - this->first == max_itens);
}

bool Queue::is_empty() {
    return (this->last == this->first);
}

TipoItem Queue::front() {
    if (!this->is_empty()) {
        return (this->contents[this->first]);
    }
}

TipoItem Queue::back() {
    if (!this->is_full()) {
        return (this->contents[this->last-1]);
    }
}

void Queue::push(TipoItem x) {
    if (!this->is_full()) {
        this->contents[this->last%max_itens] = x;
        this->last++;
    } else {
        cout << "The Queue is full!\n";
        cout << "You can't push itens into the queue\n";
    }
}

TipoItem Queue::pop() {
    if (!this->is_empty()) {
        TipoItem item = this->contents[this->first%max_itens];
        this->first++;
        return item;
    } else {
        cout << "The Queue is empty!\n";
        cout << "You can't remove itens from an empty queue\n";
    }
}

void Queue::print() {
    cout << "Fila: [ ";
    for (int i = this->first; i < this->last; i++) {
        cout << this->contents[i%max_itens] << " ";
    }
    cout << "]\n";
}

int Queue::size() {
    return (this->last-this->first);
}

#endif