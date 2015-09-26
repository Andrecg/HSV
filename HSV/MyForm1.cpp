#include "MyForm1.h"
#include <iostream>

using namespace HSV;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;
using namespace std;

[STAThread]
int main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	HSV::MyForm form;
	Application::Run(%form);
}

//Constructor
MyForm::MyForm(void)
{
	InitializeComponent();
}

//Destructor
MyForm::~MyForm()
{
	if (components)
	{
		delete components;
	}
}

//Button Click handler
Void MyForm::button1_Click(System::Object^  sender, System::EventArgs^  e) {
	//Open File dialog
	System::Windows::Forms::DialogResult res = openFileDialog1->ShowDialog();

	//If OK button is hit, get filename
	if (res == ::DialogResult::OK) {
		openFileName = openFileDialog1->FileName;
		textBox1->Text = openFileName;
		//Try to load file into pictureBox
		try{
			pictureBox1->ImageLocation = textBox1->Text;
			pictureBox1->Load();
		}
		catch (...){}
	}
	
}

//Change Text Box handler
Void MyForm::textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//Try to load file into pictureBox
	try {
		pictureBox1->ImageLocation = textBox1->Text;
		pictureBox1->Load();
	}
	catch (...){}
}