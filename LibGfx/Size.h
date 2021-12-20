//
// Created by Nil Folquer <nfolquer@gmail.com> on 19/12/2021.
//

#pragma once

namespace GFX {
class Size {
public:
    Size(const int& width, const int& height);
    ~Size() = default;

    inline int width() const { return m_width; }
    inline int height() const { return m_height; }
    void resize(const int& width, const int& height);
    void setWidth(const int& width);
    void setHeight(const int& height);

private:
    int m_width {0};
    int m_height {0};
};
}

