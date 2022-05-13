#include <iostream>
#include <list>

int main() {
    std::list<int> aula1; //lista
    std::list<int> aula2(50); //lista que já vem com 50 posições, com valor 0
    std::list<int> aula3(5, 50); //lista com 5 posições, cada um com valor 50

    std::list<int> aula, teste;
    int tam;
    std::list<int>::iterator it;

    tam = 10;
    for (int i = 0; i < tam; i++) {
        aula.push_front(i);
    }

    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);
    teste.push_front(9);

    it = aula.begin();
    advance(it, 5);

    aula.insert(it, 0);

    //aula.sort();
    //aula.reverse();

    it = aula.begin();
    advance(it, 3);
    aula.insert(it, 0);
    aula.erase(--it);

    aula.merge(teste);

    std::cout << "A lista teste teve seus elementos retirados\n";
    std::cout << "Tamanho da teste: " << teste.size() << std::endl;

    
    std::cout << "Tamanho da lista " << aula.size() << "\n\n";

    //aula.clear();
    //std::cout << "Tamanho da lista: " << aula.size() << "\n\n";

    tam = aula.size();
    for (int i = 0; i < tam; i++) {
        std::cout << aula.front() << "\n";
        aula.pop_front();
    }

    std::cout << "Tamanho da lista: " << aula.size() << "\n\n";

    /*
    push_front
    push_back
    pop_front
    pop_back
    front
    back
    empty
    size
    insert
    clear
    erase
    sort
    reverse
    merge
    */

   // Não dá de acessar um elemento qualquer com [] ou at (???)

    return 0;
}