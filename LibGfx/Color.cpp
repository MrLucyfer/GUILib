//
// Created by Nil Folquer <nfolquer@gmail.com> on 19/12/2021.
//

#include "Color.h"

namespace GFX {

Color::Color() :
        m_value({0, 0, 0, 255}) {

}

Color::Color(Color::NamedColor color) {
    m_value = nameToRGBA(color);
}

Color::Color(uint8_t r, uint8_t g, uint8_t b) :
        m_value({r, g, b, 255}) {

}

Color& Color::operator=(const Color::NamedColor &color) {
    m_value = nameToRGBA(color);
    return *this;
}

RGBA Color::nameToRGBA(const Color::NamedColor &color) {
    RGBA rgbaColor = {0};
    switch (color) {
        case Black:
            rgbaColor = {0, 0, 0, 255};
            break;
        case White:
            rgbaColor = {255, 255, 255, 255};
            break;
        case Red:
            rgbaColor = {255, 0, 0, 255};
            break;
        case Green:
            rgbaColor = {0, 255, 0, 255};
            break;
        case Yellow:
            rgbaColor = {255, 255, 0, 255};
            break;
        case Cyan:
            rgbaColor = {0, 255, 255, 255};
            break;
        case Blue:
            rgbaColor = {0, 0, 255, 255};
            break;
        default:
            rgbaColor = {0,0,0,255};
            break;
    }
    return rgbaColor;
}

Color::~Color() = default;

}