#include <iostream>

int main(int argc, const char* argv[]) {
    // Create variable for user name
    char name[255];

    // Get name from user
    std::cin >> name;

    // Our pretty business-process
    std::cout << "Hello world from " << name << std::endl;

    return 0; 
}
