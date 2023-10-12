#include <iostream>
#include <ctime>
#include <cstdlib>

int main() {

    // Initializing integers that will be used for height and width of the grid
    int width = 0, height = 0;

    // Initializing and declaring the array that holds all the ASCII value for the labyrinth
    int codeArr[12] = { 185,186,187,
                        188,200,201,
                        202,203,204,
                        205,206,32 };

    // Enables random number on every runtime/loop
    srand(time(0));

    // Asks the users for the width and height of the array and the stores them in their corresponding integers
    std::cout << "What should the labyrinth's width be: ";
    std::cin >> width;
    std::cout << "What should the labyrinth's height be: ";
    std::cin >> height;
    std::cout << "\n";


    // Loops through the two array with users input representing the height and width
    for (int i = 0; i < height; ++i) {
        std::cout << "\t";
        for (int j = 0; j < width; ++j) {
            // Calls a random number between 0-11 in the array that holds the ASCII value
            // and then converts them to a char which is printed width amount of times
            std::cout << (char)codeArr[rand() % 12];
        }
        // Creates a new line after width amount is printed on the line,
        // and then returns to the top to print a new line
        std::cout << "\n";
    }

}