#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include<msclr\marshal_cppstd.h>
#include"Header1.h"
using namespace std;
void viewtable();
namespace Windoform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for updatepres
	/// </summary>
	public ref class updatepres : public System::Windows::Forms::Form
	{
	public:
		updatepres(void)
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
		~updatepres()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:



	private: System::Windows::Forms::RichTextBox^ textBox2;
	private: System::Windows::Forms::Button^ buttonEnter;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Qualification;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Salary;


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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Qualification = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Salary = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->textBox2 = (gcnew System::Windows::Forms::RichTextBox());
			this->buttonEnter = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Qualification,
					this->Salary
			});
			this->dataGridView1->Location = System::Drawing::Point(407, 1);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 35;
			this->dataGridView1->Size = System::Drawing::Size(980, 647);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &updatepres::dataGridView1_CellContentClick);
			// 
			// Qualification
			// 
			this->Qualification->FillWeight = 35.40784F;
			this->Qualification->HeaderText = L"Patient ID";
			this->Qualification->MinimumWidth = 6;
			this->Qualification->Name = L"Qualification";
			// 
			// Salary
			// 
			this->Salary->FillWeight = 232.5066F;
			this->Salary->HeaderText = L"Prescription";
			this->Salary->MinimumWidth = 6;
			this->Salary->Name = L"Salary";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(187, 248);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(202, 177);
			this->textBox2->TabIndex = 30;
			this->textBox2->Text = L"";
			// 
			// buttonEnter
			// 
			this->buttonEnter->BackColor = System::Drawing::Color::Red;
			this->buttonEnter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonEnter->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEnter->ForeColor = System::Drawing::Color::White;
			this->buttonEnter->Location = System::Drawing::Point(128, 482);
			this->buttonEnter->Name = L"buttonEnter";
			this->buttonEnter->Size = System::Drawing::Size(121, 41);
			this->buttonEnter->TabIndex = 29;
			this->buttonEnter->Text = L"Enter";
			this->buttonEnter->UseVisualStyleBackColor = false;
			this->buttonEnter->Click += gcnew System::EventHandler(this, &updatepres::buttonEnter_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(16, 248);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(150, 31);
			this->label4->TabIndex = 28;
			this->label4->Text = L"Prescription:";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(187, 130);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(150, 30);
			this->textBox1->TabIndex = 27;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(16, 130);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 31);
			this->label1->TabIndex = 26;
			this->label1->Text = L"Patient ID: ";
			// 
			// updatepres
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1387, 650);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->buttonEnter);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"updatepres";
			this->Text = L"updatepres";
			this->Load += gcnew System::EventHandler(this, &updatepres::updatepres_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void viewtable() {
			ifstream read;
			read.open("prescription.txt");
			int count = 0;
			string a;
			while (getline(read, a)) {
				count++;
			}
			read.close();
			read.open("prescription.txt");
			for (int i = 0; i < count; i++)
			{

				dataGridView1->Rows->Add();
				
			}
			read.close();
		}
		void viewtable1() {
			ifstream read;
			read.open("prescription.txt");
			int count = 0, r = 0, c = 0;
			string a;
			String^ b;
			while (getline(read, a)) {
				count++;
			}
			read.close();
			read.open("prescription.txt");
			for (int i = 0; i < count; i++)
			{
				getline(read, a, ',');
				b = msclr::interop::marshal_as<System::String^>(a);
				this->dataGridView1->Rows[r]->Cells[c]->Value = b;
				c++;
				getline(read, a, '\n');
				b = msclr::interop::marshal_as<System::String^>(a);
				this->dataGridView1->Rows[r]->Cells[c]->Value = b;
				r++;
				c = 0;

			}
			read.close();
		}
		
		int loaddata(User*& arr)
		{
			ifstream f1;
			f1.open("prescription.txt");
			string s, x;
			int lines = 0;
			while (getline(f1, s))
				lines++;
			f1.close();
			arr = new User[lines];
			f1.open("prescription.txt");
			for (int i = 0; i < lines; i++)
			{
				getline(f1, arr[i].ID, ',');
				getline(f1, arr[i].prescription, '\n');
			}
			f1.close();
			return lines;
		}
		 void ReloadForm()
		{
			textBox1->ResetText();
			textBox2->ResetText();
		}
		
	private: System::Void buttonEnter_Click(System::Object^ sender, System::EventArgs^ e) {
		if (textBox1->Text == "" || textBox2->Text == "") {
			MessageBox::Show("Invalid Data !");
		}
		else {
			Windows::Forms::DialogResult result = MessageBox::Show("Are you sure you want to update data?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
			if (result == Windows::Forms::DialogResult::Yes) {
				String^ v = textBox1->Text;
				string v1, v2;
				v1 = msclr::interop::marshal_as<string>(v);
				v = textBox2->Text;
				v2 = msclr::interop::marshal_as<string>(v);
				User load;
				User* arr;
				User p1;
				User* p2;
				int x;

				int a = loaddata(arr);
				int b = load.searchdata(arr, v1, a);
				if (b) {

					ofstream obj;
					obj.open("prescription.txt");
					for (int i = 0; i < a; i++)
					{
						if (v1 == arr[i].ID) {
							obj << arr[i].ID << ",";
							obj << v2 << "\n";
						}
						else {
							obj << arr[i].ID << ",";
							obj << arr[i].prescription << "\n";
						}
					}

					MessageBox::Show("Prescription Updated Successfully !");

				}
				else {
					MessageBox::Show("Prescription Not found !");
					
				}
				ReloadForm();
				viewtable1();
			}

		}
	}
private: System::Void updatepres_Load(System::Object^ sender, System::EventArgs^ e) {
	viewtable();
	viewtable1();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	viewtable1();
}
};
}
