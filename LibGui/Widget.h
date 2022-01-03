//
// Created by Nil Folquer <nfolquer@gmail.com> on 22/12/2021.
//

#pragma once
#define GetBitmap() \
GFX::Bitmap(Application::the().getSurface())

#include <vector>
#include <Point.h>
#include <Size.h>
#include <Rect.h>

namespace GUI {
class Widget {
public:
    explicit Widget();
    ~Widget() = default;
    inline Widget& getParent() const { return *m_parent; }



    void setPosition(const GFX::Point& pos);
    void setPosition(const int& x, const int& y);
    void setSize(const GFX::Size& size);
    void setSize(const int& w, const int& h);
    inline GFX::Rect getRect() const { return m_rect; }
    virtual void renderEvent();

protected:
    void setParent(Widget* parent);
    template <class T>
    T& createWidget() {

    }
protected:
    Widget* m_parent {nullptr};

    std::vector<Widget*> m_children;

    GFX::Point m_pos;
    GFX::Size m_size;
    GFX::Rect m_rect;

    void updateRect();
};

}


