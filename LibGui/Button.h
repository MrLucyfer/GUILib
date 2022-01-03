//
// Created by Nil Folquer <nfolquer@gmail.com> on 22/12/2021.
//

#pragma once
#include <string>
#include "Widget.h"

namespace GUI {
class Button : public Widget{
public:
    explicit Button();
    ~Button() = default;

    void renderEvent() override;
protected:

private:
    std::string m_text;
};
}


