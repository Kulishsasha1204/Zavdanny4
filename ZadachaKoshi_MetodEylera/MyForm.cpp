#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]
int main(array<String^>^ args)
{
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // ��������� �� ������ �����
    Zavdanny4::MyForm^ form = gcnew Zavdanny4::MyForm();
    Application::Run(form);
}