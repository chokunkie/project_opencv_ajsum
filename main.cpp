#include "pch.h"
#include "MyForm.h" // 1. ดึงไฟล์หน้าต่างเข้ามา

using namespace System;
using namespace System::Windows::Forms;

// 2. บรรทัดนี้สำคัญ! ต้องใช้ชื่อโปรเจกต์ของคุณ
using namespace ConsoleApplication3;

[STAThreadAttribute]
void Main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);

    // 3. สั่งให้รันหน้าต่างที่ชื่อ MyForm ในโปรเจกต์ ConsoleApplication3
    ConsoleApplication3::MyForm^ form = gcnew ConsoleApplication3::MyForm();
    Application::Run(form);
}