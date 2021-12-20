//
// Created by Nil Folquer <nfolquer@gmail.com> on 18/12/2021.
//

#pragma once
#define SDL_MAIN_HANDLED
#include <SDL2/SDL.h>
#include <Color.h>
#include <string>

namespace GUI {
class Application {
public:
    static Application& the();
    void operator=(const Application&) = delete;
    ~Application();

    int exec();
    void setTitle(const std::string& appName);
    void resize(const int& width, const int& height);
    inline void setBackgroundColor(const GFX::Color::NamedColor& color) { m_backgroundColor = GFX::Color::Cyan; };

    inline SDL_Renderer* getRenderer() { return m_renderer; };
    inline SDL_Window* getWindow() { return m_window; };

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

    SDL_Window* m_window { nullptr };
    SDL_Renderer* m_renderer { nullptr };
};
}


