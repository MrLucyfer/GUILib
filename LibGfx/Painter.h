//
// Created by Nil Folquer <nfolquer@gmail.com> on 19/12/2021.
//

#pragma once
#include "Bitmap.h"
#include "Rect.h"
#include "Color.h"
#include <memory>

namespace GFX {
class Painter {
public:
    explicit Painter(const Bitmap& bmp);
    ~Painter() = default;

    void fillRect(const Rect& rect, const Color::NamedColor& color);
    void drawRect(const Rect& rect, const Color::NamedColor& color, const int& thickness=1);
    void drawLine(const Point& a, const Point& b, const Color::NamedColor& color, const int& thickness=1);
private:
    std::unique_ptr<Bitmap> m_bitmap;
};
}


