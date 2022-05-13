#include <iostream>
#include "stack.h"

using namespace std;

int main() {
    Stack* st = new Stack();
    TipoItem item;
    int opcao;
    cout << "Generator of stacks:\n";

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