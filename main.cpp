#include <iostream>

#include "triangle.h"
#include "circle.h"


int main(){

    std::cout << "--------------------------------------" << std::endl;
    std::cout << "---------- +++ TASK 001 +++ ----------" << std::endl;

    triangle triangles[3];

    // input
    double a, b, c;
    for (triangle& _triangle: triangles){
        std::cout << "input 3 sides for a triangle at " << &_triangle << std::endl;
        while (!_triangle.exst_tr()){
            std::cin >> a >> b >> c;
            _triangle.set(a, b, c);
        }
    }

    // output
    for (triangle& _triangle: triangles){
        _triangle.show();
        std::cout << " perimeter is " << _triangle.perimetr() << std::endl;
        std::cout << " square is " << _triangle.square() << std::endl;
        
    }



    std::cout << "--------------------------------------" << std::endl;
    std::cout << "---------- +++ TASK 002 +++ ----------" << std::endl;

    circle circles[3];

    // input
    double r, x, y;
    for (circle& __circle : circles){
        std::cout << "input radius, x and y for a circle at " << &__circle << std::endl;
        std::cin >> r >> x >> y;
        __circle.set_circle(r, x, y);
    }

    // output
    for (circle& _circle : circles){
        std::cout << "circle at " << &_circle << std::endl;
        std::cout << " square is " << _circle.square() << std::endl;

        for (triangle& _triangle: triangles){
            std::cout << " for triangle at " << &_triangle << std::endl;
            std::cout << "  around is " << _circle.triangle_around(_triangle.a, _triangle.b,c) << std::endl;
            std::cout << "  in is " << _circle.triangle_in(_triangle.a, _triangle.b,c) << std::endl;
        }
        // for (circle& _circle : circles){
        //     for (circle& _circle2 : circles){
        //         if (&_circle == &_circle2) continue;
        //         std::cout << " check_circle for circles at " << &_circle << " and " << &_circle2 << " is " << _circle.check_circle(&_circle.) << std::endl;
                
        //     }
        // }
    }
}