//
// Created by Nil Folquer <nfolquer@gmail.com> on 19/12/2021.
//

#include "Rect.h"

GFX::Rect::Rect(const GFX::Point &a, const Size &b):
    m_loc(a), m_size(b)
{

}

std::vector<GFX::Point> GFX::Rect::getPoints() const {
    std::vector<GFX::Point> points;
    points.push_back(m_loc);
    points.emplace_back(m_loc.x() + m_size.width(), m_loc.y());
    points.emplace_back(m_loc.x() + m_size.width(), m_loc.y() + m_size.height());
    points.emplace_back(m_loc.x(), m_loc.y() + m_size.height());

    return points;
}
