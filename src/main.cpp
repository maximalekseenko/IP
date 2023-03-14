#include <iostream>
#include <vector>


#if __has_include("p2/_task1.h")
 #include "p2/_task1.h"
 #include "p2/_task2.h"
 #include "p2/_task3.h"
#endif

#if __has_include("p3/_task1.h")
 #include "p3/_task1.h"
 #include "p3/_task2.h"
 #include "p3/_task3.h"
#endif

#if __has_include("p6/_task1.h")
 #include "p6/_task1.h"
 #include "p6/_task2.h"
 #include "p6/_task3.h"
#endif


int main(int argc, char *argv[]){
    switch (*argv[1]) {
        case '1': return task1();
        case '2': return task2();
        case '3': return task3();
        default: throw;
    }
}