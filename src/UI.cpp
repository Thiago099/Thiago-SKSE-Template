#include "UI.h"

void UI::Register() {

    if (!SKSEMenuFramework::IsInstalled()) {
        return;
    }
    SKSEMenuFramework::SetSection("Thiago Template");
    SKSEMenuFramework::AddSectionItem("Menu 1", Menu1::Render);
}

void __stdcall UI::Menu1::Render() { 
    ImGui::Text("Hello World");
}