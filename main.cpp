#include <iostream>

#include "triangle.h"


int main(){
    triangle triangles[3];

    // input
    double a, b, c;
    for (triangle& __triangle: triangles){
        while (!__triangle.exst_tr()){
            std::cin >> a >> b >> c;
            __triangle.set(a, b, c);
        }
    }

    // output
    for (triangle& __triangle: triangles){
        __triangle.show();
        std::cout << __triangle.perimetr() << std::endl;
        std::cout << __triangle.square() << std::endl;
    }
}