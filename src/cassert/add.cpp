#include <cassert>

int add(int a, int b) {
    return a * b; // the bug is here
}

int main() {
    assert(add(1, 2) == 3);
    return 0;
}