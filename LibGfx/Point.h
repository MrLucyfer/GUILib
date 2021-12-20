//
// Created by Nil Folquer <nfolquer@gmail.com> on 19/12/2021.
//

#pragma once
#include <iostream>

namespace GFX {
class Point {
public:
    Point() = default;
    Point(const int& x, const int& y);
    ~Point() = default;

    inline int x() const { return m_x; };
    inline int y() const { return m_y; };

    friend std::ostream& operator<<(std::ostream& os, const Point& t);
private:
    int m_x {0};
    int m_y {0};
};
}
