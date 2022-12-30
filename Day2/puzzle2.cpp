#include <fstream>
#include <iostream>
#include <string>

#include "package.h"

#define INPUT_FILE "input.txt"
// #define INPUT_FILE "test_input.txt"

int main(int argc, char** argv) {
    std::ifstream input_file { INPUT_FILE };
    unsigned long total_area_needed = 0;
    
    while(input_file) {
        std::string file_line;
        std::getline(input_file, file_line);
        if (file_line.length() == 0) {
            continue;
        }

        Package* package = new Package(file_line);

        total_area_needed += package->get_perimeter() + package->get_smallest_perimiter();
    }

    std::cout << total_area_needed << std::endl;
}
