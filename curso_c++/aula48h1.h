#ifndef aula48h1_h
#define aula48h1_h

#include <iostream>

class Base1 {
public:
    void impBase1();
private:
};

class Base2 {
public:
    void impBase2();
};

class CFB:public Base1, public Base2 {
public:
private:
};

// Métodos Base1
void Base1::impBase1() {
    std::cout << "Imp classe Base1" << std::endl;
}

// Métodos Base2
void Base2::impBase2() {
    std::cout << "Imp classe Base2" << std::endl;
}


#endif