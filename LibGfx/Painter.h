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
    void drawLine(const Point& point, const Color::NamedColor& color);
private:
    std::unique_ptr<Bitmap> m_bitmap;
};
}


