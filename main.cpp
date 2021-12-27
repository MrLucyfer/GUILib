//
// Created by Nil Folquer <nfolquer@gmail.com> on 17/12/2021.
//

#include <memory>
#include <Application.h>
#include <Button.h>

int main(int argc, char* argv[]) {
    GUI::Application::the().setTitle("Sindic");
    GUI::Application::the().setBackgroundColor(GFX::Color::Cyan);

    GUI::Button button;

    GUI::Application::the().setMainWidget(&button);

    return GUI::Application::the().exec();
}
