//
// Created by Nil Folquer <nfolquer@gmail.com> on 19/12/2021.
//

#include "Painter.h"

GFX::Painter::Painter(const GFX::Bitmap &bmp) {
    m_bitmap = std::make_unique<Bitmap>(bmp);
}

void GFX::Painter::fillRect(const GFX::Rect &rect, const GFX::Color::NamedColor &color) {
    Point start = rect.getLoc();
    Size dim = rect.getSize();
    Color c(color);

    for(int y = start.y(); y < dim.height(); y++) {
        for(int x = start.x(); x < dim.width(); x++) {
            m_bitmap->setPixel(y, x, c.to32bit());
        }
    }

}

void GFX::Painter::drawLine(const GFX::Point &point, const GFX::Color::NamedColor &color) {

}
