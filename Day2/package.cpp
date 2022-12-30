#include <algorithm>
#include <iostream>
#include <string>
#include <sstream>
#include <vector>

#include "package.h"

Package::Package(std::string dimensions) {
    std::istringstream input_stream(dimensions);
    std::string token;

    std::getline(input_stream, token, 'x');
    m_length = std::stoul(token);

    std::getline(input_stream, token, 'x');
    m_width = std::stoul(token);

    std::getline(input_stream, token, 'x');
    m_height = std::stoul(token);
}

unsigned long Package::get_surface_area() {
    return (2 * m_length * m_width) + (2 * m_length * m_height) + (2 * m_width * m_height);
}

unsigned long Package::get_smallest_area() {
    long first_side = m_length * m_width;
    long second_side = m_length * m_height;
    long third_side = m_width * m_height;

    return std::min({ first_side, second_side, third_side });
}

unsigned long Package::get_perimeter() {
    return m_length * m_width * m_height;
}

unsigned long Package::get_smallest_perimiter() {
    std::vector<unsigned long> sides { m_length,  m_width, m_height };

    std::sort(sides.begin(), sides.end());

    unsigned long first = sides.at(0) * 2;
    unsigned long second = sides.at(1) * 2;

    return first + second;
}