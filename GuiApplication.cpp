#include "GuiApplication.h"

#include <imgui.h>

namespace Application {
    void run() {
        // here will be code for our application
        bool show_application = true;
        ImGui::Begin("Application", &show_application);
        ImGui::Text("Hello from the app!");
        ImGui::End();
    }
}


