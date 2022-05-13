#include <iostream>

int power(int b, int e) {
    if (e == 0) return 1;
    else if (e == 1) return b;
    int tmp = power(b, e/2);
    if (e % 2 == 0) {
        return tmp*tmp;
    } else {
        return tmp*tmp*b;
    }
}
