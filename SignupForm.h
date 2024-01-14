#pragma once
//#include"LoginForm.h"
#include<string>
#include<iostream>
#include<fstream>
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
	/// Summary for SignupForm
	/// </summary>
	public ref class SignupForm : public System::Windows::Forms::Form
	{
	public:
		SignupForm(void)
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
		~SignupForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBoxID;
	private: System::Windows::Forms::TextBox^ textBoxMedicine;




	private: System::Windows::Forms::TextBox^ textBoxAddress;

	private: System::Windows::Forms::TextBox^ textBoxGender;
	private: System::Windows::Forms::TextBox^ textBoxUsername;



	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBoxDisease;


	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBoxMobileNo;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBoxPassword;
	private: System::Windows::Forms::TextBox^ textBoxAge;


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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SignupForm::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBoxID = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMedicine = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAddress = (gcnew System::Windows::Forms::TextBox());
			this->textBoxGender = (gcnew System::Windows::Forms::TextBox());
			this->textBoxUsername = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBoxDisease = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxMobileNo = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBoxPassword = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAge = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(-7, -1);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(4);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(344, 81);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(11, 550);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(146, 37);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Password:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(7, 164);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(153, 37);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Username:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(8, 229);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(118, 37);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Gender:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Control;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(9, 486);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(160, 37);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Mobile No:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::Control;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(8, 418);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(134, 37);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Address: ";
			this->label6->Click += gcnew System::EventHandler(this, &SignupForm::label6_Click);
			// 
			// textBoxID
			// 
			this->textBoxID->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxID->Location = System::Drawing::Point(190, 118);
			this->textBoxID->Margin = System::Windows::Forms::Padding(4);
			this->textBoxID->Name = L"textBoxID";
			this->textBoxID->Size = System::Drawing::Size(173, 27);
			this->textBoxID->TabIndex = 7;
			// 
			// textBoxMedicine
			// 
			this->textBoxMedicine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxMedicine->Location = System::Drawing::Point(191, 363);
			this->textBoxMedicine->Margin = System::Windows::Forms::Padding(4);
			this->textBoxMedicine->Name = L"textBoxMedicine";
			this->textBoxMedicine->Size = System::Drawing::Size(285, 27);
			this->textBoxMedicine->TabIndex = 8;
			// 
			// textBoxAddress
			// 
			this->textBoxAddress->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAddress->Location = System::Drawing::Point(191, 428);
			this->textBoxAddress->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAddress->Name = L"textBoxAddress";
			this->textBoxAddress->Size = System::Drawing::Size(419, 27);
			this->textBoxAddress->TabIndex = 9;
			// 
			// textBoxGender
			// 
			this->textBoxGender->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxGender->Location = System::Drawing::Point(191, 239);
			this->textBoxGender->Margin = System::Windows::Forms::Padding(4);
			this->textBoxGender->Name = L"textBoxGender";
			this->textBoxGender->Size = System::Drawing::Size(173, 27);
			this->textBoxGender->TabIndex = 10;
			this->textBoxGender->TextChanged += gcnew System::EventHandler(this, &SignupForm::textBoxGender_TextChanged);
			// 
			// textBoxUsername
			// 
			this->textBoxUsername->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxUsername->Location = System::Drawing::Point(191, 174);
			this->textBoxUsername->Margin = System::Windows::Forms::Padding(4);
			this->textBoxUsername->Name = L"textBoxUsername";
			this->textBoxUsername->Size = System::Drawing::Size(173, 27);
			this->textBoxUsername->TabIndex = 11;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Red;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->Location = System::Drawing::Point(527, 604);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 43);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &SignupForm::button1_Click);
			// 
			// textBoxDisease
			// 
			this->textBoxDisease->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxDisease->Location = System::Drawing::Point(191, 294);
			this->textBoxDisease->Margin = System::Windows::Forms::Padding(4);
			this->textBoxDisease->Name = L"textBoxDisease";
			this->textBoxDisease->Size = System::Drawing::Size(285, 27);
			this->textBoxDisease->TabIndex = 13;
			this->textBoxDisease->TextChanged += gcnew System::EventHandler(this, &SignupForm::textBoxAge_TextChanged);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::Control;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(11, 610);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(75, 37);
			this->label7->TabIndex = 14;
			this->label7->Text = L"Age:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::Control;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(8, 108);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(152, 37);
			this->label8->TabIndex = 15;
			this->label8->Text = L"Patient ID:";
			this->label8->Click += gcnew System::EventHandler(this, &SignupForm::label8_Click);
			// 
			// textBoxMobileNo
			// 
			this->textBoxMobileNo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxMobileNo->Location = System::Drawing::Point(191, 496);
			this->textBoxMobileNo->Margin = System::Windows::Forms::Padding(4);
			this->textBoxMobileNo->Name = L"textBoxMobileNo";
			this->textBoxMobileNo->Size = System::Drawing::Size(285, 27);
			this->textBoxMobileNo->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::Control;
			this->label9->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(8, 294);
			this->label9->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(121, 37);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Disease:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::SystemColors::Control;
			this->label10->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(9, 353);
			this->label10->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(142, 37);
			this->label10->TabIndex = 18;
			this->label10->Text = L"Medicine:";
			// 
			// textBoxPassword
			// 
			this->textBoxPassword->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxPassword->Location = System::Drawing::Point(191, 563);
			this->textBoxPassword->Margin = System::Windows::Forms::Padding(4);
			this->textBoxPassword->Name = L"textBoxPassword";
			this->textBoxPassword->Size = System::Drawing::Size(173, 27);
			this->textBoxPassword->TabIndex = 19;
			// 
			// textBoxAge
			// 
			this->textBoxAge->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAge->Location = System::Drawing::Point(190, 620);
			this->textBoxAge->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAge->Name = L"textBoxAge";
			this->textBoxAge->Size = System::Drawing::Size(173, 27);
			this->textBoxAge->TabIndex = 20;
			// 
			// SignupForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(932, 678);
			this->Controls->Add(this->textBoxAge);
			this->Controls->Add(this->textBoxPassword);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBoxMobileNo);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBoxDisease);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxUsername);
			this->Controls->Add(this->textBoxGender);
			this->Controls->Add(this->textBoxAddress);
			this->Controls->Add(this->textBoxMedicine);
			this->Controls->Add(this->textBoxID);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"SignupForm";
			this->Text = L"SignupForm";
			this->Load += gcnew System::EventHandler(this, &SignupForm::SignupForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBoxGender_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		int count = 0,count1=0,count2=0,count3=0;
		if (textBoxUsername->Text == "" || textBoxPassword->Text == ""||textBoxGender->Text == "" || textBoxAge->Text == "" || textBoxAddress->Text == "" || textBoxMobileNo->Text == "")
		{
			MessageBox::Show("Invalid Data");
			count = 1;
		}
		else if (textBoxGender->Text != "Male" && textBoxGender->Text != "male" && textBoxGender->Text != "M" && textBoxGender->Text != "m" && textBoxGender->Text != "MALE" && textBoxGender->Text != "female" && textBoxGender->Text != "Female" && textBoxGender->Text != "F" && textBoxGender->Text != "f" && textBoxGender->Text != "FEMALE")
		{
			MessageBox::Show("Invalid Gender");
			count = 1;
		}
		if (textBoxAge->Text != "")
		{
			
			string s = "";
			String^ S = textBoxAge->Text;
			int l = textBoxAge->Text->Length;
			for (int i = 0; i<l; i++)
			{
				s+=S[i];
			}
			int m = s.length();
			for (int i = 0; i<m; i++)
			{
				int a = int(s[i]);
				if (a < 48 || a>57)
					count1 = 1;
			}
			if(count1==1)
				MessageBox::Show("Invalid Age");
		}
		if (textBoxID->Text != "")
		{
			User obj1;
			User* arr;
			int l = obj1.loaddata(arr, "Patient");
			String^ s = textBoxID->Text;
			string s1;
			s1 = msclr::interop::marshal_as<string>(s);
			int c = obj1.searchdata(arr, s1, l);
			if (c == 1)
			{
				delete[] arr;
				arr = NULL;
				MessageBox::Show("Please enter the unique ID");
				count3 = 1;

			}
			else {
				delete[] arr;
				arr = NULL;
				count3 = 0;
			}
		}
	    if (textBoxMobileNo->Text != "")
		{
		
			string s = "";
			String^ S = textBoxMobileNo->Text;
			int l = textBoxMobileNo->Text->Length;
			if (l != 11 && l != 12)
			{
				MessageBox::Show("Invalid Mobile Number");
				count2 = 1;
			}
			else
			{
				for (int i = 0; i < l; i++)
				{
					s += S[i];
				}
				int m = s.length();
				
				for (int i = 0; i < m; i++)
				{
					int a = int(s[i]);
					if (a < 48 || a>57)
					{
						if (a == 45 && i == 4)
							count2 = 0;
						else
							count2 = 1;
					}
				}
				if (count2 == 1)
					MessageBox::Show("Invalid Mobile Number");
			}
		}
		if (count == 0 && count1 == 0 && count2 == 0&&count3==0)
		{
			ofstream f2;
			f2.open("Patient\\login.txt",ios::app);
			String^ s= textBoxID->Text;
			string s1;
			s1 = msclr::interop::marshal_as<string>(s);
			f2 << s1 << ",";
			s = textBoxPassword->Text;
			s1 = msclr::interop::marshal_as<string>(s);
			f2 << s1 << ",";
			s = textBoxUsername->Text;
			s1 = msclr::interop::marshal_as<string>(s);
			f2 << s1 << ",";
			s = textBoxGender->Text;
			s1 = msclr::interop::marshal_as<string>(s);
			f2 << s1 << ",";
			s = textBoxAge->Text;
			s1 = msclr::interop::marshal_as<string>(s);
			f2 << s1 << ",";
			s = textBoxDisease->Text;
			s1 = msclr::interop::marshal_as<string>(s);
			f2 << s1 <<",";
			s = textBoxMedicine->Text;
			s1 = msclr::interop::marshal_as<string>(s);
			f2 << s1 << ",";
			s = textBoxAddress->Text;
			s1 = msclr::interop::marshal_as<string>(s);
			f2 << s1 << ",";
			s = textBoxMobileNo->Text;
			s1 = msclr::interop::marshal_as<string>(s);
			f2 << s1<<"\n";
			MessageBox::Show("Data Added Successfully !");
			this->Hide();
			/*LoginForm obj;
			obj.ShowDialog();*/
		}
	}
	private: System::Void textBoxAge_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
	}
private: System::Void SignupForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
