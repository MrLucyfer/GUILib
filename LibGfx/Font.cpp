//
// Created by Nil Folquer <nfolquer@gmail.com> on 27/12/2021.
//

#include "Font.h"
#include <Log.h>
#include <utility>

GFX::Font::FontManager::FontManager(const std::string &fontPath) {
    for(int i = 8; i <= 32; i+=2) {
        TTF_Font* font = TTF_OpenFont(fontPath.c_str(), i);
        if(!font) {
            LogError("Font unable to open");
            continue;
        } else {
            m_fonts.insert(std::pair<int, TTF_Font*>(i, font));
        }
    }
}

GFX::Font::FontManager::~FontManager() {
    for(auto it = m_fonts.begin(); it != m_fonts.end(); ++it) {
        TTF_CloseFont(it->second);
    }
}

