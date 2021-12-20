//
// Created by Nil Folquer <nfolquer@gmail.com> on 19/12/2021.
//

#pragma once
#include "Point.h"
#include "Size.h"

namespace GFX {
class Rect {
public:
    Rect(const Point& a, const Size& b);
    ~Rect() = default;
private:
    Point m_loc;
    Size m_size;
};
}


