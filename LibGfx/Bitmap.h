//
// Created by Nil Folquer <nfolquer@gmail.com> on 20/12/2021.
//

#pragma once
#include <SDL.h>
#include "Color.h"
#include <iostream>

namespace GFX {
class Bitmap {
public:
    explicit Bitmap(SDL_Surface* surface);
    ~Bitmap();

    inline int getWidth() const { return m_width; };
    inline int getHeight() const { return m_height; };
    inline int getPitch() const { return m_pitch; };

    void setPixel(const int& x, const int& y, const uint32_t& color);
    friend std::ostream& operator<<(std::ostream& os, const Bitmap& t);

private:
    int m_width {0};
    int m_height {0};
    int m_pitch {0};
    uint8_t m_bpp {0};
    uint32_t* m_pixels {nullptr};

};
}

