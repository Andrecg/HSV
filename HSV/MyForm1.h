#pragma once

namespace HSV {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form {
	
	public: MyForm(void);

	protected: ~MyForm(void);

	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::TrackBar^  trackHUE;
	private: System::Windows::Forms::TrackBar^  trackSAT;
	private: System::Windows::Forms::TrackBar^  trackVAL;



	private: System::Windows::Forms::TextBox^  textBox1;
			 String^ openFileName;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->trackHUE = (gcnew System::Windows::Forms::TrackBar());
			this->trackSAT = (gcnew System::Windows::Forms::TrackBar());
			this->trackVAL = (gcnew System::Windows::Forms::TrackBar());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackHUE))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackSAT))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackVAL))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(492, 25);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(99, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(22, 72);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(463, 413);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// trackHUE
			// 
			this->trackHUE->Location = System::Drawing::Point(492, 134);
			this->trackHUE->Name = L"trackHUE";
			this->trackHUE->Size = System::Drawing::Size(289, 45);
			this->trackHUE->TabIndex = 2;
			// 
			// trackSAT
			// 
			this->trackSAT->Location = System::Drawing::Point(492, 252);
			this->trackSAT->Name = L"trackSAT";
			this->trackSAT->Size = System::Drawing::Size(289, 45);
			this->trackSAT->TabIndex = 4;
			// 
			// trackVAL
			// 
			this->trackVAL->Location = System::Drawing::Point(492, 364);
			this->trackVAL->Name = L"trackVAL";
			this->trackVAL->Size = System::Drawing::Size(289, 45);
			this->trackVAL->TabIndex = 5;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(25, 23);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(441, 20);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(793, 523);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->trackVAL);
			this->Controls->Add(this->trackSAT);
			this->Controls->Add(this->trackHUE);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackHUE))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackSAT))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->trackVAL))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
	
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e);
};
}
