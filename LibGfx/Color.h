//
// Created by Nil Folquer <nfolquer@gmail.com> on 19/12/2021.
//

#pragma once

#include <cstdint>

namespace GFX {

struct RGBA {
    uint8_t r;
    uint8_t g;
    uint8_t b;
    uint8_t a;
};

class Color {
public:
    enum NamedColor {
        Black,
        White,
        Red,
        Green,
        Cyan,
        Blue,
        Yellow,
    };

    Color();

    explicit Color(NamedColor color);

    Color(uint8_t r, uint8_t g, uint8_t b);
    ~Color();

    Color& operator=(const NamedColor& color);

    inline void setColor(const NamedColor& color) { m_value = nameToRGBA(color); };

    inline uint8_t getR() const { return m_value.r; };
    inline uint8_t getG() const { return m_value.g; };
    inline uint8_t getB() const { return m_value.b; };
    inline uint8_t getA() const { return m_value.a; };
private:
    static RGBA nameToRGBA(const NamedColor& color);
private:
    RGBA m_value{0};
};
}

