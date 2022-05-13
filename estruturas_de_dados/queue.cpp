#include <iostream>
#include "queue.h"

using namespace std;

int main() {
    Queue* queue1 = new Queue();
    int opcao;
    TipoItem item;
    cout << "Generator of queues:\n";
    do {
        cout << "Enter a command: (0-Stop/1-Push/2-Pop/3-Print)\n";
        cin >> opcao;
        switch (opcao) {
            case 1:
                cout << "Enter the item you wanna insert:\n";
                cin >> item;
                queue1->push(item);
                break;
            case 2:
                cout << "Item returned: " << queue1->pop() << "\n";
                break;
            case 3:
                queue1->print();
                break;
        }
    } while (opcao != 0);
    delete queue1;
    return 0;
}
