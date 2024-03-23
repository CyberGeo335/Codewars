#include <iostream>
bool collinearity(int x1, int y1, int x2, int y2);

bool collinearity(int x1, int y1, int x2, int y2){
    return x1 * y2  == x2 * y1;
}

int main() {
    collinearity(-5, -7, 0, 0);
}
