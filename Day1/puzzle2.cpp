#include <fstream>
#include <iostream>
#include <string>

// #define INPUT_FILE "test_input.txt"
#define INPUT_FILE "input.txt"

int main(int argc, char** argv) {
    std::string instruction_input;
    std::fstream input_file { INPUT_FILE };
    long floor = 0;
    int basement_index = 0;

    input_file >> instruction_input;

    for (int i = 0; i < instruction_input.length(); i++) {
        if (instruction_input[i] == '(') {
            floor = floor + 1;
        } else {
            floor = floor -1;
        }

        if (floor == -1) {
            basement_index = i + 1;
            break;
        }
    }

    std::cout << basement_index << std::endl;
}
