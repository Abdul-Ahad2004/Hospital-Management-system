#pragma once
#include<string>
#include<iostream>
#include<msclr\marshal_cppstd.h>
#include<fstream>
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
	public ref class BillPay : public System::Windows::Forms::Form
	{
	public:
		BillPay(void)
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
		~BillPay()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::TextBox^ textBoxAmount;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(BillPay::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxAmount = (gcnew System::Windows::Forms::TextBox());
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
			this->label1->Location = System::Drawing::Point(199, 150);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(220, 46);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Bill Payment";
			this->label1->Click += gcnew System::EventHandler(this, &BillPay::label1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Control;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(16, 234);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(191, 37);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Amount Paid:";
			// 
			// textBoxAmount
			// 
			this->textBoxAmount->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxAmount->Location = System::Drawing::Point(231, 241);
			this->textBoxAmount->Margin = System::Windows::Forms::Padding(4);
			this->textBoxAmount->Name = L"textBoxAmount";
			this->textBoxAmount->Size = System::Drawing::Size(321, 30);
			this->textBoxAmount->TabIndex = 5;
			// 
			// Enter
			// 
			this->Enter->BackColor = System::Drawing::Color::White;
			this->Enter->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->Enter->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Enter->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Enter->Location = System::Drawing::Point(241, 342);
			this->Enter->Margin = System::Windows::Forms::Padding(4);
			this->Enter->Name = L"Enter";
			this->Enter->Size = System::Drawing::Size(133, 39);
			this->Enter->TabIndex = 6;
			this->Enter->Text = L"Add";
			this->Enter->UseVisualStyleBackColor = false;
			this->Enter->Click += gcnew System::EventHandler(this, &BillPay::Enter_Click);
			// 
			// BillPay
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::White;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(933, 452);
			this->Controls->Add(this->Enter);
			this->Controls->Add(this->textBoxAmount);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"BillPay";
			this->Text = L"BillPay";
			this->Load += gcnew System::EventHandler(this, &BillPay::BillPay_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void BillPay_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Enter_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBoxAmount->Text == "")
		{
			MessageBox::Show("Invalid Username or Password");
		}
		int count1 = 0;
		if (textBoxAmount->Text != "")
		{

			string s = "";
			String^ S = textBoxAmount->Text;
			int l = textBoxAmount->Text->Length;
			for (int i = 0; i < l; i++)
			{
				s += S[i];
			}
			int m = s.length();
			for (int i = 0; i < m; i++)
			{
				int a = int(s[i]);
				if (a < 48 || a>57)
					count1 = 1;
			}
			if (count1 == 1)
				MessageBox::Show("Invalid Amount");
		}
		if (count1 == 0)
		{
			ofstream f2;
			ifstream f1;
			string s1;
			f1.open("TrackID.txt");
			getline(f1, s1);
			f1.close();
			f2.open("Bill Payment.txt", ios::app);
			f2 << s1 << ",";
			String^ s2 = textBoxAmount->Text;
			string s3;
			s3 = msclr::interop::marshal_as<string>(s2);
			f2 << s3 << "\n";
			f2.close();
			MessageBox::Show("Ammount Added Successfully !");
			this->Hide();
		}
	}
	};
}
