//
// Created by Nil Folquer <nfolquer@gmail.com> on 19/12/2021.
//

#pragma once
#include "Point.h"
#include "Size.h"
#include <vector>

namespace GFX {
class Rect {
public:
    Rect(const Point& a, const Size& b);
    ~Rect() = default;

    inline Point getLoc() const {return m_loc;}
    inline Size getSize() const {return m_size;}

    std::vector<GFX::Point> getPoints() const;
private:
    Point m_loc;
    Size m_size;
};
}


