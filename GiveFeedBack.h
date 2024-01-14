#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include<msclr\marshal_cppstd.h>
using namespace std;
namespace Windoform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for GiveFeedBack
	/// </summary>
	public ref class GiveFeedBack : public System::Windows::Forms::Form
	{
	public:
		GiveFeedBack(void)
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
		~GiveFeedBack()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::RichTextBox^ textBox2;
	protected:
	private: System::Windows::Forms::Button^ buttonEnter;
	private: System::Windows::Forms::Label^ label4;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(GiveFeedBack::typeid));
			this->textBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->buttonEnter = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(3, 159);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(512, 204);
			this->textBox2->TabIndex = 30;
			this->textBox2->Text = L"";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &GiveFeedBack::textBox2_TextChanged);
			// 
			// buttonEnter
			// 
			this->buttonEnter->BackColor = System::Drawing::Color::Red;
			this->buttonEnter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonEnter->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEnter->ForeColor = System::Drawing::Color::White;
			this->buttonEnter->Location = System::Drawing::Point(164, 415);
			this->buttonEnter->Name = L"buttonEnter";
			this->buttonEnter->Size = System::Drawing::Size(218, 41);
			this->buttonEnter->TabIndex = 29;
			this->buttonEnter->Text = L"Submit feedback";
			this->buttonEnter->UseVisualStyleBackColor = false;
			this->buttonEnter->Click += gcnew System::EventHandler(this, &GiveFeedBack::buttonEnter_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 22.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 64);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(274, 50);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Give FeedBack";
			// 
			// GiveFeedBack
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(812, 509);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->buttonEnter);
			this->Controls->Add(this->label4);
			this->Name = L"GiveFeedBack";
			this->Text = L"GiveFeedBack";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void buttonEnter_Click(System::Object^ sender, System::EventArgs^ e) {
		if (buttonEnter->Text == ""){
			MessageBox::Show("Please Enter a valid FeedBack !");
		}
		else {
			ofstream write;
			write.open("Feedback.txt",ios::app);
			string s1;
			String^ s= textBox2->Text;
			s1 = msclr::interop::marshal_as<string>(s);
			write << s1 << '\n';
			MessageBox::Show("FeedBack Added Successfully !");
			this->Close();
			
		}
	}
};
}
