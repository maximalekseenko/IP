#include <iostream>
#include <vector>

#include "eq2.h"
#include "rational.h"


int main(){

    std::cout << "--------------------------------------" << std::endl;
    std::cout << "---------- +++ TASK 001 +++ ----------" << std::endl;

    eq2 A, B, C;
    double a, b, c, x;

    std::cout << "input a, b and c for equasion at " << &A << std::endl;
    std::cin >> a >> b >> c;
    A.set(a, b, c);

    std::cout << "input a, b and c for equasion at " << &B << std::endl;
    std::cin >> a >> b >> c;
    B.set(a, b, c);

    C = A + B;

    std::cout << "input x for equasions at " << &A << " and " << &B << std::endl;
    std::cin >> x;

    std::cout << &A << ":" << std::endl;
    std::cout << " x is " << A.find_X() << std::endl;
    std::cout << " y is " << A.find_Y(x) << std::endl;

    std::cout << &B << ":" << std::endl;
    std::cout << " x is " << B.find_X() << std::endl;
    std::cout << " y is " << B.find_Y(x) << std::endl;

    std::cout << &A << " + " << &B << ":" << std::endl;
    std::cout << " x is " << C.find_X() << std::endl;
    std::cout << " y is " << C.find_Y(x) << std::endl;


    std::cout << "--------------------------------------" << std::endl;
    std::cout << "---------- +++ TASK 002 +++ ----------" << std::endl;

    std::vector<rational> rationals;

    // input
    for (int i = 0; i < 3; i ++){
        rational _rational;
        std::cout << "input a and b for a rational at " << &_rational << std::endl;
        std::cin >> a >> b;
        _rational.set(a, b);
        rationals.push_back(_rational);
    }

    // output
    for (auto _rational : rationals){
        _rational.show();
    }

    
}