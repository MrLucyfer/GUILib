//
// Created by Nil Folquer <nfolquer@gmail.com> on 19/12/2021.
//

#include "Painter.h"
#include <vector>

GFX::Painter::Painter(const GFX::Bitmap &bmp) {
    m_bitmap = std::make_unique<Bitmap>(bmp);
}

void GFX::Painter::fillRect(const GFX::Rect &rect, const GFX::Color::NamedColor &color) {
    Point start = rect.getLoc();
    Size dim = rect.getSize();
    Color c(color);

    for(int y = start.y(); y < start.y() + dim.height(); y++) {
        for(int x = start.x(); x < start.x() + dim.width(); x++) {
            m_bitmap->setPixel(x, y, c.to32bit());
        }
    }

}

void GFX::Painter::drawLine(const Point& a, const Point& b, const Color::NamedColor& color, const int& thickness) {
    if(thickness <= 0) {
        return;
    }

    if(a.y() == b.y()) {
        //Horizontal line
        for(int x = a.x(); x < b.x(); x++) {
            for(int y = 0; y < thickness; y++) {
                m_bitmap->setPixel(x, a.y() + y, color);
            }
        }
    } else if(a.x() == b.x()) {
        //Vertical line
        for(int x = a.y(); x < b.y(); x++) {
            for(int y = 0; y < thickness; y++) {
                m_bitmap->setPixel(a.x() + y, x, color);
            }
        }
    } else {
        return;
    }
}

void GFX::Painter::drawRect(const GFX::Rect &rect, const GFX::Color::NamedColor &color, const int &thickness) {
    std::vector<Point> points = rect.getPoints();
    Color c(color);

    drawLine(points[0],points[1],color, thickness);
    drawLine(points[1],points[2],color, thickness);
    drawLine(points[3], points[2],color, thickness);
    drawLine(points[0], points[3],color, thickness);
}
