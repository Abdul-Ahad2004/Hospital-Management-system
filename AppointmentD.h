#pragma once

#include<iostream>
#include<string>
#include<fstream>
#include<msclr\marshal_cppstd.h>
#include"Header1.h"
using namespace std;
namespace Windoform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Appointment1
	/// </summary>
	public ref class AppointmentD : public System::Windows::Forms::Form
	{
	public:
		AppointmentD(void)
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
		~AppointmentD()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;

	private: System::Windows::Forms::Label^ label1;












	private: System::Windows::Forms::Label^ label6;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ textBoxID;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBoxN;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBoxD;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::TextBox^ textBoxM;
	private: System::Windows::Forms::TextBox^ textBoxT;
	private: System::Windows::Forms::TextBox^ textBoxY;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AppointmentD::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBoxID = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBoxN = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBoxD = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBoxM = (gcnew System::Windows::Forms::TextBox());
			this->textBoxT = (gcnew System::Windows::Forms::TextBox());
			this->textBoxY = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(4, 1);
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
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(153, 139);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(280, 37);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Delete Appointment";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold));
			this->label6->Location = System::Drawing::Point(41, 337);
			this->label6->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 32);
			this->label6->TabIndex = 11;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::SystemColors::Control;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(41, 187);
			this->label8->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(134, 32);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Patient ID:";
			// 
			// textBoxID
			// 
			this->textBoxID->Location = System::Drawing::Point(196, 193);
			this->textBoxID->Margin = System::Windows::Forms::Padding(4);
			this->textBoxID->Name = L"textBoxID";
			this->textBoxID->Size = System::Drawing::Size(288, 22);
			this->textBoxID->TabIndex = 14;
			this->textBoxID->TextChanged += gcnew System::EventHandler(this, &AppointmentD::textBoxID_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(5, 234);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(175, 32);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Patient Name:";
			// 
			// textBoxN
			// 
			this->textBoxN->Location = System::Drawing::Point(196, 241);
			this->textBoxN->Margin = System::Windows::Forms::Padding(4);
			this->textBoxN->Name = L"textBoxN";
			this->textBoxN->Size = System::Drawing::Size(288, 22);
			this->textBoxN->TabIndex = 16;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(551, 395);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 42);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Delete";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AppointmentD::button1_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::Control;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(5, 298);
			this->label5->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(74, 32);
			this->label5->TabIndex = 20;
			this->label5->Text = L"Date:";
			// 
			// textBoxD
			// 
			this->textBoxD->Location = System::Drawing::Point(104, 304);
			this->textBoxD->Margin = System::Windows::Forms::Padding(4);
			this->textBoxD->Name = L"textBoxD";
			this->textBoxD->Size = System::Drawing::Size(145, 22);
			this->textBoxD->TabIndex = 23;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(328, 359);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(77, 32);
			this->label2->TabIndex = 24;
			this->label2->Text = L"Time:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(5, 358);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(71, 32);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Year:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::Control;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(303, 298);
			this->label7->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(97, 32);
			this->label7->TabIndex = 26;
			this->label7->Text = L"Month:";
			// 
			// textBoxM
			// 
			this->textBoxM->Location = System::Drawing::Point(413, 304);
			this->textBoxM->Margin = System::Windows::Forms::Padding(4);
			this->textBoxM->Name = L"textBoxM";
			this->textBoxM->Size = System::Drawing::Size(145, 22);
			this->textBoxM->TabIndex = 27;
			// 
			// textBoxT
			// 
			this->textBoxT->Location = System::Drawing::Point(416, 363);
			this->textBoxT->Margin = System::Windows::Forms::Padding(4);
			this->textBoxT->Name = L"textBoxT";
			this->textBoxT->Size = System::Drawing::Size(145, 22);
			this->textBoxT->TabIndex = 28;
			// 
			// textBoxY
			// 
			this->textBoxY->Location = System::Drawing::Point(104, 367);
			this->textBoxY->Margin = System::Windows::Forms::Padding(4);
			this->textBoxY->Name = L"textBoxY";
			this->textBoxY->Size = System::Drawing::Size(145, 22);
			this->textBoxY->TabIndex = 29;
			// 
			// AppointmentD
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(933, 452);
			this->Controls->Add(this->textBoxY);
			this->Controls->Add(this->textBoxT);
			this->Controls->Add(this->textBoxM);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBoxD);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBoxN);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxID);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"AppointmentD";
			this->Text = L"AppointmentD";
			this->Load += gcnew System::EventHandler(this, &AppointmentD::AppointmentD_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AppointmentD_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		Appointment obj1;
		Appointment* arr;
		int l = obj1.loaddata(arr);
		String^ t = textBoxID->Text;
		string s;
		s = msclr::interop::marshal_as<string>(t);
		String^ t1 = textBoxN->Text;
		string s1;
		s1 = msclr::interop::marshal_as<string>(t1);
		String^ t2 = textBoxD->Text;
		string s2;
		s2 = msclr::interop::marshal_as<string>(t2);
		String^ t3 = textBoxM->Text;
		string s3;
		s3 = msclr::interop::marshal_as<string>(t3);
		String^ t4 = textBoxY->Text;
		string s4;
		s4 = msclr::interop::marshal_as<string>(t4);
		String^ t5 = textBoxT->Text;
		string s5;
		s5 = msclr::interop::marshal_as<string>(t5);
		int countee = obj1.searchdata(arr, s, s1, s2, s3, s4, s5, l);
		if (countee == 1)
		{
			int count = 0;
			if (textBoxID->Text == "" || textBoxN->Text == "")
			{
				MessageBox::Show("Invalid Data");
				count = 1;
			}
			if (count == 0)
			{
				int i = obj1.searchdata1(arr, s, s1, s2, s3, s4, s5, l);
				obj1.deletedata(arr, i, l);
				obj1.returndata(arr, l);
				delete[] arr;
				arr = NULL;
				MessageBox::Show("Appointment has been deleted successfully");
				this->Hide();
			}
		}
		else {
			delete[] arr;
			arr = NULL;
			MessageBox::Show("Patient has no appointment");
		}

	}
	private: System::Void textBoxID_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
