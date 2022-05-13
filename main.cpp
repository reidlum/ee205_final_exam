#include <iostream>
#include "Square.h"

// Main for Classes
int main() {
    std::cout << "Hello, World!" << std::endl;

    Square mySquare(2);
    std::cout << "The area of mySquare is: "
              << mySquare.compute_area()
              << std::endl;

    Rectangle myRectangle( 2, 4 );
    std::cout << "The area of myRectangle is: "
              << myRectangle.compute_area()
              << std::endl;

    //My tests

    // testing getSide()
    /*
    std::cout << mySquare.getSide() << std::endl;
    */
    /* tests a negative side
    Square mySquare2(-1);
    std::cout << "The area of mySquare is: "
              << mySquare2.compute_area()
              << std::endl;
    */
    /*
    Square mySquare3(0);
    std::cout << "The area of mySquare is: "
              << mySquare3.compute_area()
              << std::endl;
    */
    /* testing negative rectangle
    Rectangle myRectangle2( -2, 4 );
    std::cout << "The area of myRectangle is: "
              << myRectangle2.compute_area()
              << std::endl;
    */

    return 0;
}