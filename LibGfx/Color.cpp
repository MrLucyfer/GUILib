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

    uint32_t Color::to32bit() const {
        uint32_t color;
        color = (m_value.a << 24) | (m_value.r << 16) | (m_value.g << 8) | m_value.b;
        return color;
    }

    RGB Color::toRGB() const {
        return {m_value.r, m_value.g, m_value.b};
    }

    SDL_Color Color::toSDL_Color() const {
        SDL_Color color;
        color.a = m_value.a;
        color.r = m_value.r;
        color.g = m_value.g;
        color.b = m_value.b;

        return color;
    }

    Color::~Color() = default;

}