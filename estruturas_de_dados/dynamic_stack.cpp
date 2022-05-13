#include <iostream>
#include "dynamic_stack.h"

using namespace std;

int main() {
    Stack<int>* st = new Stack<int>();
    int item;
    int opcao;
    cout << "Generator of stacks:\n";
    cout << st->full() << "\n";

    do {
        cout << "Choose a command (0-Stop/1-Push/2->Pop/3->Print)\n";
        cin >> opcao;
        switch (opcao) {
            case 1:
                cout << "Choose the element to be inserted:\n";
                cin >> item;
                st->push(item);
                break;
            case 2:
                cout << "Returned element: " << st->pop() << "\n";
                break;
            case 3:
                st->print();
                break;
        }
    } while (opcao != 0);

    return 0;
}