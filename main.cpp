//
// Created by Nil Folquer <nfolquer@gmail.com> on 17/12/2021.
//

#include <memory>
#include "LibGui/Application.h"

int main(int argc, char* argv[]) {

    auto app = GUI::Application::the();
    app.setTitle("Sindic");
    return app.exec();
}
