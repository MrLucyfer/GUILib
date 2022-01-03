//
// Created by Nil Folquer <nfolquer@gmail.com> on 22/12/2021.
//

#include "Widget.h"

GUI::Widget::Widget() = default;

void GUI::Widget::setParent(GUI::Widget *parent) {
    m_parent = parent;
}

void GUI::Widget::setPosition(const GFX::Point& pos) {
    m_pos = pos;
    updateRect();
}

void GUI::Widget::setSize(const GFX::Size& size) {
    m_size = size;
    updateRect();
}

void GUI::Widget::setPosition(const int &x, const int &y) {
    setPosition({x, y});
}

void GUI::Widget::setSize(const int &w, const int &h) {
    setSize({h, w});
}

void GUI::Widget::updateRect() {
    m_rect = GFX::Rect(m_pos, m_size);
}

void GUI::Widget::renderEvent() {

}


