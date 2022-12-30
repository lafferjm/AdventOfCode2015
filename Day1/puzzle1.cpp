#include <fstream>
#include <iostream>
#include <string>

// #define INPUT_FILE "test_input.txt"
#define INPUT_FILE "input.txt"

int main(int argc, char** argv) {
    std::string instruction_input;
    std::fstream input_file { INPUT_FILE };
    long floor = 0;

    input_file >> instruction_input;

    for(const char c: instruction_input) {
        if (c == '(') {
            floor = floor + 1;
        } else {
            floor = floor - 1;
        }
    }

    std::cout << floor << std::endl;
}
