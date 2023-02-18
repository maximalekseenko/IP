#include <iostream>

#include "triangle.h"


int main(){

    std::cout << "--------------------------------------" << std::endl;
    std::cout << "---------- +++ TASK 001 +++ ----------" << std::endl;

    triangle triangles[3];

    // input
    double a, b, c;
    for (triangle& __triangle: triangles){
        std::cout << "input 3 sides for a triangle at " << &__triangle << std::endl;
        while (!__triangle.exst_tr()){
            std::cin >> a >> b >> c;
            __triangle.set(a, b, c);
        }
    }

    // output
    for (triangle& __triangle: triangles){
        __triangle.show();
        std::cout << " perimeter is " << __triangle.perimetr() << std::endl;
        std::cout << " square is " << __triangle.square() << std::endl;
        
    }



    // std::cout << "--------------------------------------" << std::endl;
    // std::cout << "---------- +++ TASK 002 +++ ----------" << std::endl;
}