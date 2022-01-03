//
// Created by Nil Folquer <nfolquer@gmail.com> on 27/12/2021.
//

#pragma once
#include <string>
#include <SDL_ttf.h>
#include <unordered_map>
#include "Color.h"

namespace GFX {
    namespace Font {



        class FontManager {
        public:
            explicit FontManager(const std::string& fontPath);
            inline TTF_Font* getFontSize(const int& size) { return m_fonts[size];}
            ~FontManager();
        private:
            std::unordered_map<int, TTF_Font*> m_fonts;
        };
    }
}