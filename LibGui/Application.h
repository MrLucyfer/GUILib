//
// Created by Nil Folquer <nfolquer@gmail.com> on 18/12/2021.
//

#pragma once
#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <SDL_ttf.h>
#include <Color.h>
#include <string>
#include <memory>
#include "Widget.h"
#include "Font.h"

namespace GUI {
class Application {
public:

    static Application& the();
    //void operator=(const Application&) = delete;
    Application operator=(const Application&) = delete;
    Application(const Application& other) = delete;

    int exec();
    void setTitle(const std::string& appName);
    void resize(const int& width, const int& height);
    inline void setBackgroundColor(const GFX::Color::NamedColor& color) { m_backgroundColor = GFX::Color::Cyan; };

    inline SDL_Renderer* getRenderer() const{ return m_renderer; };
    inline SDL_Window* getWindow() const { return m_window; };
    inline SDL_Surface* getSurface() const { return m_surface; };


    void setMainWidget(Widget* widget);

private:
    Application();
    bool init();
    void render();
    void clean();

    void paintBackground();
private:
    std::string m_appName {"Default App"};
    //TODO: Maybe this could end beign GFX::Size
    int m_width {1280};
    int m_height {720};
    bool m_running {false};
    bool m_hasInited {false};

    GFX::Color m_backgroundColor {GFX::Color::Black};

    Widget* m_mainWidget;

    SDL_Window* m_window { nullptr };
    SDL_Renderer* m_renderer { nullptr };
    SDL_Surface* m_surface {nullptr};
    GFX::Font m_font;

};

}


