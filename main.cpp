#include <iostream>
#include <vector>

#include "triangle.h"
#include "circle.h"
#include "figure.h"


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

    std::vector<circle> circles;

    // input
    double r, x, y;
    for (int i = 0; i < 3; i ++){
        circle _circle;
        std::cout << "input radius, x and y for a circle at " << &_circle << std::endl;
        std::cin >> r >> x >> y;
        _circle.set_circle(r, x, y);
        circles.push_back(_circle);
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
        for (circle& _circle : circles){
            for (circle& _circle2 : circles){
                std::cout << &_circle << " " << &_circle2 << std::endl;
                // std::cout << " check_circle for circles at " << &_circle << " and " << &_circle2 << " is " << _circle.check_circle(&_circle.) << std::endl;
                
            }
        }
    }


    std::cout << "--------------------------------------" << std::endl;
    std::cout << "---------- +++ TASK 003 +++ ----------" << std::endl;

    std::vector<figure> figures;

    // input
    double x1, x2, x3, x4, y1, y2, y3, y4;
    for (int i = 0; i < 3; i ++){
        std::cout << "input x1, x2, x3, x4, y1, y2, y3, y4 for a figure" << std::endl;
        std::cin >> x1 >> x2 >> x3 >> x4 >> y1 >> y2 >> y3 >> y4;
        figures.push_back(figure(x1, x2, x3, x4, y1, y2, y3, y4));
    }

    // output
    for (figure& _figure : figures){
        _figure.show();

        std::cout << " prug " << _figure.is_prug() << std::endl;
        std::cout << " square " << _figure.is_square() << std::endl;
        std::cout << " romb " << _figure.is_romb() << std::endl;
        std::cout << " in circle " << _figure.is_in_circle() << std::endl;
        std::cout << " out circle " << _figure.is_out_circle() << std::endl;
    }
}


