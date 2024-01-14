#pragma once

#include"Header1.h"
#include"ReceptionistHome.h"


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
	public ref class LoginFormR : public System::Windows::Forms::Form
	{
	public:
		LoginFormR(void)
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
		~LoginFormR()
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(LoginFormR::typeid));
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
			this->pictureBox1->Location = System::Drawing::Point(24, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(431, 97);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::Black;
			this->label1->Location = System::Drawing::Point(81, 123);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(326, 37);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Receptionist Login Page";
			this->label1->Click += gcnew System::EventHandler(this, &LoginFormR::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 188);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 30);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Receptionist ID:";
			this->label2->Click += gcnew System::EventHandler(this, &LoginFormR::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(60, 237);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 30);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Password:";
			// 
			// textBoxUsername1
			// 
			this->textBoxUsername1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxUsername1->Location = System::Drawing::Point(186, 195);
			this->textBoxUsername1->Name = L"textBoxUsername1";
			this->textBoxUsername1->Size = System::Drawing::Size(242, 25);
			this->textBoxUsername1->TabIndex = 4;
			// 
			// textBoxPassword1
			// 
			this->textBoxPassword1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPassword1->Location = System::Drawing::Point(186, 244);
			this->textBoxPassword1->Name = L"textBoxPassword1";
			this->textBoxPassword1->PasswordChar = '*';
			this->textBoxPassword1->Size = System::Drawing::Size(242, 25);
			this->textBoxPassword1->TabIndex = 5;
			// 
			// Enter
			// 
			this->Enter->BackColor = System::Drawing::Color::DimGray;
			this->Enter->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Enter->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Enter->Location = System::Drawing::Point(186, 310);
			this->Enter->Name = L"Enter";
			this->Enter->Size = System::Drawing::Size(100, 32);
			this->Enter->TabIndex = 6;
			this->Enter->Text = L"Login";
			this->Enter->UseVisualStyleBackColor = false;
			this->Enter->Click += gcnew System::EventHandler(this, &LoginFormR::Enter_Click);
			// 
			// LoginFormR
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(700, 367);
			this->Controls->Add(this->Enter);
			this->Controls->Add(this->textBoxPassword1);
			this->Controls->Add(this->textBoxUsername1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"LoginFormR";
			this->Text = L"LoginFormR";
			this->Load += gcnew System::EventHandler(this, &LoginFormR::LoginFormR_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void LoginFormR_Load(System::Object^ sender, System::EventArgs^ e) {
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
			int l = obj1.loaddata(arr, "Receptionist");
			String^ s = textBoxUsername1->Text;
			string s1;
			s1 = msclr::interop::marshal_as<string>(s);
			String^ s2 = textBoxPassword1->Text;
			string s3;
			s3 = msclr::interop::marshal_as<string>(s2);
			int count = obj1.searchdata(arr, s1, s3, l);
			if (count == 1)
			{
				delete[] arr;
				arr = NULL;
				ReceptionistHome obj;
				this->Hide();
				obj.ShowDialog();
				this->Show();

			}
			else {
				User obj2;
				User* arr1;
				int l1 = obj2.loaddata(arr1);
				int count2 = obj2.searchdata(arr1, s1, s3, l1);
				if (count2 == 1)
				{
					delete[] arr;
					arr = NULL;
					ReceptionistHome obj;
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
	}
	};
}
