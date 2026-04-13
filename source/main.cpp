#include "../includes/MyForm.h"
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
int main(cli::array<System::String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew SmarCalc::MyForm());
    return 0;
}