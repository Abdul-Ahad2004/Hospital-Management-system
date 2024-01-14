#pragma once
#include"LoginForm.h"
#include"LoginFormR.h"
#include"LoginFormA.h"
namespace Windoform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ Patientbutton;
	private: System::Windows::Forms::Button^ Receptionistbutton;
	private: System::Windows::Forms::Button^ Adminbutton;
	private: System::Windows::Forms::Label^ label1;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Patientbutton = (gcnew System::Windows::Forms::Button());
			this->Receptionistbutton = (gcnew System::Windows::Forms::Button());
			this->Adminbutton = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(31, 89);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(575, 119);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// Patientbutton
			// 
			this->Patientbutton->BackColor = System::Drawing::Color::DarkGray;
			this->Patientbutton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Patientbutton->Location = System::Drawing::Point(12, 245);
			this->Patientbutton->Margin = System::Windows::Forms::Padding(4);
			this->Patientbutton->Name = L"Patientbutton";
			this->Patientbutton->Size = System::Drawing::Size(316, 78);
			this->Patientbutton->TabIndex = 1;
			this->Patientbutton->Text = L"Login By Patient";
			this->Patientbutton->UseVisualStyleBackColor = false;
			this->Patientbutton->Click += gcnew System::EventHandler(this, &MainForm::Patientbutton_Click);
			// 
			// Receptionistbutton
			// 
			this->Receptionistbutton->BackColor = System::Drawing::Color::DarkGray;
			this->Receptionistbutton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Receptionistbutton->Location = System::Drawing::Point(336, 245);
			this->Receptionistbutton->Margin = System::Windows::Forms::Padding(4);
			this->Receptionistbutton->Name = L"Receptionistbutton";
			this->Receptionistbutton->Size = System::Drawing::Size(316, 78);
			this->Receptionistbutton->TabIndex = 2;
			this->Receptionistbutton->Text = L"Login By Receptionist";
			this->Receptionistbutton->UseVisualStyleBackColor = false;
			this->Receptionistbutton->Click += gcnew System::EventHandler(this, &MainForm::Receptionistbutton_Click);
			// 
			// Adminbutton
			// 
			this->Adminbutton->BackColor = System::Drawing::Color::DarkGray;
			this->Adminbutton->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Adminbutton->Location = System::Drawing::Point(148, 342);
			this->Adminbutton->Margin = System::Windows::Forms::Padding(4);
			this->Adminbutton->Name = L"Adminbutton";
			this->Adminbutton->Size = System::Drawing::Size(316, 78);
			this->Adminbutton->TabIndex = 3;
			this->Adminbutton->Text = L"Login By Admin";
			this->Adminbutton->UseVisualStyleBackColor = false;
			this->Adminbutton->Click += gcnew System::EventHandler(this, &MainForm::Adminbutton_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(205, 28);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(214, 46);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Welcome To";
			// 
			// MainForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(933, 452);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Adminbutton);
			this->Controls->Add(this->Receptionistbutton);
			this->Controls->Add(this->Patientbutton);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MainForm";
			this->Text = L"MainForm";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Patientbutton_Click(System::Object^ sender, System::EventArgs^ e) {
		LoginForm obj;
		this->Hide();
		obj.ShowDialog();
		this->Show();
	
	}
private: System::Void Receptionistbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	LoginFormR obj;
	this->Hide();
	obj.ShowDialog();
	this->Show();
	
}
private: System::Void Adminbutton_Click(System::Object^ sender, System::EventArgs^ e) {
	LoginFormA obj;
	this->Hide();
	obj.ShowDialog();
	this->Show();
	
}
private: System::Void MainForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
