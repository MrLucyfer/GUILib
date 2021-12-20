//
// Created by Nil Folquer <nfolquer@gmail.com> on 19/12/2021.
//

#include "Size.h"

GFX::Size::Size(const int &width, const int &height):
    m_width(width), m_height(height)
{

}

void GFX::Size::resize(const int &width, const int &height) {
    m_width = width;
    m_height = height;
}

void GFX::Size::setHeight(const int &height) {
    m_height = height;
}

void GFX::Size::setWidth(const int &width) {
    m_width = width;
}
