//
// Created by Nil Folquer <nfolquer@gmail.com> on 18/12/2021.
//

#include "Application.h"
#include <iostream>
#include <Bitmap.h>
#include <Painter.h>

GUI::Application::Application() = default;

int GUI::Application::exec() {
    m_hasInited = init();
    if(m_hasInited) {
        m_running = true;
        SDL_Event e;
        while(m_running) {
            while(SDL_PollEvent(&e) != 0) {
                if(e.type == SDL_QUIT) {
                    m_running = false;
                }
            }
            render();
        }
        clean();
        return 0;
    } else {
        return -1;
    }
}

void GUI::Application::setTitle(const std::string &appName) {
    m_appName = appName;
}

void GUI::Application::resize(const int &width, const int &height) {
    m_width = width;
    m_height = height;
    if(m_hasInited) {
        SDL_SetWindowSize(m_window, m_width, m_height);
    }
}

bool GUI::Application::init() {
    SDL_SetMainReady();
    if(SDL_Init(SDL_INIT_VIDEO) < 0) {
        std::cout << "Couldn't init" << std::endl;
        return false;
    }

    m_window = SDL_CreateWindow(m_appName.c_str(), SDL_WINDOWPOS_UNDEFINED,  SDL_WINDOWPOS_UNDEFINED, m_width, m_height, SDL_WINDOW_SHOWN);
    if(m_window == nullptr) {
        std::cout << "Couldn't create the window" << std::endl;
        return false;
    }

    m_renderer = SDL_CreateRenderer(m_window, -1, SDL_RENDERER_ACCELERATED);
    if(m_renderer == nullptr) {
        std::cout << "Couldn't create the window" << std::endl;
        return false;
    }

    if(TTF_Init() == -1) {
        std::cout << "Couldn't init font core" << std::endl;
    }

    m_font.loadFont("C:/Windows/Fonts/segoeui.ttf");

    m_surface = SDL_GetWindowSurface(m_window);
    if(m_surface == nullptr) {
        std::cout << "Could not get the surface" << std::endl;
        return false;
    }

    return true;
}

void GUI::Application::render() {
    paintBackground();
    SDL_RenderClear(m_renderer);
    //TODO Here we call all our render childs
    m_mainWidget->renderEvent();
    SDL_UpdateWindowSurface(m_window);
    SDL_Delay(1);
}

void GUI::Application::clean() {
    SDL_DestroyWindow(m_window);
    SDL_Quit();
}

void GUI::Application::paintBackground() {
    //TODO: Fix the bg color issue
    SDL_memset(m_surface->pixels, 240, m_surface->h * m_surface->pitch);
}

GUI::Application& GUI::Application::the() {
    static Application instance;
    return instance;
}

void GUI::Application::setMainWidget(GUI::Widget* widget) {
    m_mainWidget = widget;
}


