//
// Created by Nil Folquer <nfolquer@gmail.com> on 19/12/2021.
//

#include "Point.h"

GFX::Point::Point(const int &x, const int &y):
    m_x(x), m_y(y)
{

}

std::ostream &GFX::operator<<(std::ostream &os, const GFX::Point &t) {
    os << "(" << t.m_x << "," << " " << t.m_y << ")";
    return os;
}


