//
// Created by Nil Folquer <nfolquer@gmail.com> on 22/12/2021.
//

#include "Button.h"
#include "Application.h"
#include <Painter.h>

GUI::Button::Button()
{
    m_pos = {640, 360};
    m_size = {80, 30};
    updateRect();
}

void GUI::Button::renderEvent() {
    GFX::Painter painter((GetBitmap()));
    painter.fillRect(m_rect, GFX::Color::White);
}
