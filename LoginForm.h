#pragma once

#include"Header1.h"
#include"PatientHome.h"
#include<msclr\marshal_cppstd.h>
#include<string>
using namespace std;
namespace Windoform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LoginForm
	/// </summary>
	public ref class LoginForm : public System::Windows::Forms::Form
	{

		
	public:
		
		LoginForm(void)
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
		~LoginForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxUsername1;
	private: System::Windows::Forms::TextBox^ textBoxPassword1;


	private: System::Windows::Forms::Button^ Enter;


	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxUsername1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPassword1 = (gcnew System::Windows::Forms::TextBox());
			this->Enter = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(32, 15);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(575, 119);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(169, 149);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(318, 46);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Patient Login Page";
			this->label1->Click += gcnew System::EventHandler(this, &LoginForm::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(16, 208);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(152, 37);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Patient ID:";
			this->label2->Click += gcnew System::EventHandler(this, &LoginForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(25, 270);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 37);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Password:";
			// 
			// textBoxUsername1
			// 
			this->textBoxUsername1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxUsername1->Location = System::Drawing::Point(179, 214);
			this->textBoxUsername1->Margin = System::Windows::Forms::Padding(4);
			this->textBoxUsername1->Name = L"textBoxUsername1";
			this->textBoxUsername1->Size = System::Drawing::Size(321, 29);
			this->textBoxUsername1->TabIndex = 4;
			// 
			// textBoxPassword1
			// 
			this->textBoxPassword1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPassword1->Location = System::Drawing::Point(181, 276);
			this->textBoxPassword1->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPassword1->Name = L"textBoxPassword1";
			this->textBoxPassword1->PasswordChar = '*';
			this->textBoxPassword1->Size = System::Drawing::Size(321, 29);
			this->textBoxPassword1->TabIndex = 5;
			// 
			// Enter
			// 
			this->Enter->BackColor = System::Drawing::Color::DimGray;
			this->Enter->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Enter->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Enter->Location = System::Drawing::Point(195, 350);
			this->Enter->Margin = System::Windows::Forms::Padding(4);
			this->Enter->Name = L"Enter";
			this->Enter->Size = System::Drawing::Size(133, 39);
			this->Enter->TabIndex = 6;
			this->Enter->Text = L"Login";
			this->Enter->UseVisualStyleBackColor = false;
			this->Enter->Click += gcnew System::EventHandler(this, &LoginForm::Enter_Click);
			// 
			// LoginForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(933, 452);
			this->Controls->Add(this->Enter);
			this->Controls->Add(this->textBoxPassword1);
			this->Controls->Add(this->textBoxUsername1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"LoginForm";
			this->Text = L"LoginForm";
			this->Load += gcnew System::EventHandler(this, &LoginForm::LoginForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LoginForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Enter_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxUsername1->Text == "" || textBoxPassword1->Text == "")
		{
			MessageBox::Show("Invalid Username or Password");
		}
		else
		{
			User obj1;
			User* arr;

			int l=obj1.loaddata(arr,"Patient");
			String^ s = textBoxUsername1->Text;
			string s1;
			s1 = msclr::interop::marshal_as<string>(s);
			ofstream n;
			n.open("TrackID.txt");
			n << s1;
			n.close();
			String^ s2 = textBoxPassword1->Text;
			string s3;
			s3 = msclr::interop::marshal_as<string>(s2);
			int count = obj1.searchdata(arr, s1, s3,l);
			if(count==1)
			{
				delete[] arr;
				arr = NULL;
				PatientHome obj;
				this->Hide();
				obj.ShowDialog();
				this->Show();
				
			}
			else
			{
						delete[] arr;
						arr = NULL;
						MessageBox::Show("Wrong Username or Password");
			}
		}
	}
};
}
