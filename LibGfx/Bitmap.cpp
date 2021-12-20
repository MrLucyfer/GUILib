//
// Created by Nil Folquer <nfolquer@gmail.com> on 20/12/2021.
//

#include "Bitmap.h"
#include <cstdint>

GFX::Bitmap::Bitmap(SDL_Surface *surface) {
    m_width = surface->w;
    m_height = surface->h;
    m_pitch = surface->pitch;
    m_bpp = surface->format->BitsPerPixel;
    m_pixels = (uint32_t*)surface->pixels;
}

GFX::Bitmap::~Bitmap() {
    m_pixels = nullptr;
}

void GFX::Bitmap::setPixel(const int &x, const int &y, const uint32_t &color) {
      m_pixels[x + (y * m_width)] = color;
}


std::ostream &GFX::operator<<(std::ostream &os, const GFX::Bitmap &t) {
    os << "w: " << t.m_width << " h: " << t.m_height << std::endl;
    os << "Pitch: " << t.m_pitch << " bpp: " << t.m_bpp;

    return os;
}
