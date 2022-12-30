#ifndef __PACKAGE_H__
#define __PACKAGE_H__

#include <string>

class Package {
    public:
        Package(std::string);
        unsigned long get_surface_area();
        unsigned long get_smallest_area();
        unsigned long get_smallest_perimiter();
        unsigned long get_perimeter();
    private:
        unsigned long m_length;
        unsigned long m_width;
        unsigned long m_height;
};

#endif
