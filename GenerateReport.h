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
	/// Summary for GenerateReport
	/// </summary>
	public ref class GenerateReport : public System::Windows::Forms::Form
	{
	public:
		GenerateReport(void)
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
		~GenerateReport()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;








	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ buttonEnter;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Password;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name123;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ gender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Age;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Qualification;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Salary;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Address;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Phone;




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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Password = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name123 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->gender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Qualification = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Salary = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Address = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Phone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->buttonEnter = (gcnew System::Windows::Forms::Button());
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
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->ID, this->Password,
					this->Name123, this->gender, this->Age, this->Qualification, this->Salary, this->Address, this->Phone
			});
			this->dataGridView1->Location = System::Drawing::Point(304, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 35;
			this->dataGridView1->Size = System::Drawing::Size(970, 647);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &GenerateReport::dataGridView1_CellContentClick);
			// 
			// ID
			// 
			this->ID->HeaderText = L"ID";
			this->ID->MinimumWidth = 6;
			this->ID->Name = L"ID";
			// 
			// Password
			// 
			this->Password->HeaderText = L"Password";
			this->Password->MinimumWidth = 6;
			this->Password->Name = L"Password";
			// 
			// Name123
			// 
			this->Name123->HeaderText = L"Name";
			this->Name123->MinimumWidth = 6;
			this->Name123->Name = L"Name123";
			// 
			// gender
			// 
			this->gender->HeaderText = L"Gender";
			this->gender->MinimumWidth = 6;
			this->gender->Name = L"gender";
			// 
			// Age
			// 
			this->Age->HeaderText = L"Age";
			this->Age->MinimumWidth = 6;
			this->Age->Name = L"Age";
			// 
			// Qualification
			// 
			this->Qualification->HeaderText = L"Disease Diagnosed";
			this->Qualification->MinimumWidth = 6;
			this->Qualification->Name = L"Qualification";
			// 
			// Salary
			// 
			this->Salary->HeaderText = L"Medicine";
			this->Salary->MinimumWidth = 6;
			this->Salary->Name = L"Salary";
			// 
			// Address
			// 
			this->Address->HeaderText = L"Address";
			this->Address->MinimumWidth = 6;
			this->Address->Name = L"Address";
			// 
			// Phone
			// 
			this->Phone->HeaderText = L"Phone";
			this->Phone->MinimumWidth = 6;
			this->Phone->Name = L"Phone";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(1, 122);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(132, 31);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Patient ID: ";
			this->label1->Click += gcnew System::EventHandler(this, &GenerateReport::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(148, 122);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(150, 30);
			this->textBox1->TabIndex = 4;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &GenerateReport::textBox1_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Control;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Location = System::Drawing::Point(2, 213);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(131, 31);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Test Name:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(148, 213);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(150, 30);
			this->textBox2->TabIndex = 9;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(148, 318);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(150, 30);
			this->textBox3->TabIndex = 10;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Location = System::Drawing::Point(24, 318);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(86, 31);
			this->label2->TabIndex = 11;
			this->label2->Text = L"Result:";
			// 
			// buttonEnter
			// 
			this->buttonEnter->BackColor = System::Drawing::Color::Red;
			this->buttonEnter->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonEnter->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonEnter->ForeColor = System::Drawing::Color::White;
			this->buttonEnter->Location = System::Drawing::Point(81, 429);
			this->buttonEnter->Name = L"buttonEnter";
			this->buttonEnter->Size = System::Drawing::Size(121, 41);
			this->buttonEnter->TabIndex = 17;
			this->buttonEnter->Text = L"Enter";
			this->buttonEnter->UseVisualStyleBackColor = false;
			this->buttonEnter->Click += gcnew System::EventHandler(this, &GenerateReport::buttonEnter_Click);
			// 
			// GenerateReport
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1274, 646);
			this->Controls->Add(this->buttonEnter);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"GenerateReport";
			this->Text = L"GenerateReport";
			this->Load += gcnew System::EventHandler(this, &GenerateReport::GenerateReport_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		string charArrayToString(char* charArray, int size) {
			return string(charArray, size);
		}
		void viewtable() {
			ifstream read;
			int count = 0, arrcount = 0;
			int r = 0, c = 0;
			char* id;
			char* pass;
			char* name;
			char* gender;
			char* address;
			char* age;
			char* disease;
			char* medicine;
			char* contact;
			read.open("Patient\\login.txt");
			string a;
			while (getline(read, a)) {
				count++;
			}
			Patient* arr = new Patient[count];
			read.close();
			read.open("Patient\\login.txt");
			int coun = 0, i = 0, k = 0, j = 0;
			while (getline(read, a)) {
				dataGridView1->Rows->Add();
				string f = "";
				if (a == "") {
					break;
				}
				for (i = 0; a[i] != ','; i++)
				{
					coun++;
				}
				id = new char[coun];
				coun = 0;
				for (int l = 0; a[l] != ','; l++)
				{
					id[k] = a[l];
					k++;
				}
				arr[arrcount].ID = charArrayToString(id, k);
				String^ iid1 = msclr::interop::marshal_as<System::String^>(arr[arrcount].ID);
				this->dataGridView1->Rows[r]->Cells[c]->Value = iid1;
				c++;
				k = 0;
				coun = 0;
				for (j = i + 1; a[j] != ','; j++)
				{
					coun++;
				}
				pass = new char[coun];
				coun = 0;
				for (int l = i + 1; a[l] != ','; l++)
				{
					pass[k] = a[l];
					k++;
				}
				arr[arrcount].password = charArrayToString(pass, k);
				String^ pa1 = msclr::interop::marshal_as<System::String^>(arr[arrcount].password);
				this->dataGridView1->Rows[r]->Cells[c]->Value = pa1;
				c++;
				k = 0;
				for (i = j + 1; a[i] != ','; i++)
				{
					coun++;
				}
				name = new char[coun];
				coun = 0;
				for (int l = j + 1; a[l] != ','; l++)
				{
					name[k] = a[l];
					k++;
				}
				arr[arrcount].name = charArrayToString(name, k);
				String^ na1 = msclr::interop::marshal_as<System::String^>(arr[arrcount].name);
				this->dataGridView1->Rows[r]->Cells[c]->Value = na1;
				c++;
				k = 0;
				for (j = i + 1; a[j] != ','; j++)
				{
					coun++;
				}
				gender = new char[coun];
				coun = 0;
				for (int l = i + 1; a[l] != ','; l++)
				{
					gender[k] = a[l];
					k++;
				}
				arr[arrcount].gender = charArrayToString(gender, k);
				String^ gen = msclr::interop::marshal_as<System::String^>(arr[arrcount].gender);
				this->dataGridView1->Rows[r]->Cells[c]->Value = gen;
				c++;
				k = 0;
				for (i = j + 1; a[i] != ','; i++)
				{
					coun++;
				}
				age = new char[coun];
				coun = 0;
				for (int l = j + 1; a[l] != ','; l++)
				{
					age[k] = a[l];
					k++;
				}
				string xy;
				xy = charArrayToString(age, k);
				arr[arrcount].age = stoi(xy);
				String^ add1 = msclr::interop::marshal_as<System::String^>(xy);
				this->dataGridView1->Rows[r]->Cells[c]->Value = add1;
				c++;
				k = 0;
				for (j = i + 1; a[j] != ','; j++)
				{
					coun++;
				}
				disease = new char[coun];
				coun = 0;
				for (int l = i + 1; a[l] != ','; l++)
				{
					disease[k] = a[l];
					k++;
				}
				arr[arrcount].disease = charArrayToString(disease, k);

				String^ cont1 = msclr::interop::marshal_as<System::String^>(arr[arrcount].disease);
				this->dataGridView1->Rows[r]->Cells[c]->Value = cont1;
				c++;
				k = 0;
				for (i = j + 1; a[i] != ','; i++)
				{
					coun++;
				}
				medicine = new char[coun];
				coun = 0;
				for (int l = j + 1; a[l] != ','; l++)
				{
					medicine[k] = a[l];
					k++;
				}
				arr[arrcount].medicine = charArrayToString(medicine, k);
				String^ qu1 = msclr::interop::marshal_as<System::String^>(arr[arrcount].medicine);
				this->dataGridView1->Rows[r]->Cells[c]->Value = qu1;
				c++;
				k = 0;
				for (j = i + 1; a[j] != ','; j++)
				{
					coun++;
				}
				address = new char[coun];
				coun = 0;
				for (int l = i + 1; a[l] != ','; l++)
				{
					address[k] = a[l];
					k++;
				}
				arr[arrcount].address = charArrayToString(address, k);
				String^ sa1 = msclr::interop::marshal_as<System::String^>(arr[arrcount].address);
				this->dataGridView1->Rows[r]->Cells[c]->Value = sa1;
				c++;
				k = 0;
				for (i = j + 1; a[i] != '\0'; i++)
				{
					coun++;
				}
				contact = new char[coun];
				coun = 0;
				for (int l = j + 1; a[l] != '\0'; l++)
				{
					contact[k] = a[l];
					k++;
				}
				arr[arrcount].phone_no = charArrayToString(contact, k);
				String^ sa11 = msclr::interop::marshal_as<System::String^>(arr[arrcount].phone_no);
				this->dataGridView1->Rows[r]->Cells[c]->Value = sa11;
				arrcount++;
				r++;
				c = 0;
				k = 0;
				delete[] id;
				delete[] pass;
				delete[] name;
				delete[] address;
				delete[] age;
				delete[] disease;
				delete[] medicine;
				delete[] contact;
				delete[]gender;
			}
		}
int loaddata(User*& arr)
{
	ifstream f1;
	string x;
	f1.open("Report.txt");
	string s;
	int lines = 0;
	while (getline(f1, s))
		lines++;
	f1.close();
	arr = new User[lines];
	f1.open("Report.txt");
	for (int i = 0; i < lines; i++)
	{
		getline(f1, arr[i].ID, ',');
		getline(f1, x, '\n');
	}
	f1.close();
	return lines;
}
int loaddata1(User*& arr)
{
	ifstream f1;
	string x;
	f1.open("Patient\\login.txt");
	string s;
	int lines = 0;
	while (getline(f1, s))
		lines++;
	f1.close();
	arr = new User[lines];
	f1.open("Patient\\login.txt");
	for (int i = 0; i < lines; i++)
	{
		getline(f1, arr[i].ID, ',');
		getline(f1, x, '\n');
	}
	f1.close();
	return lines;
}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void buttonEnter_Click(System::Object^ sender, System::EventArgs^ e) {
	if (textBox1->Text == "" || textBox2->Text == "" || textBox3->Text == "") {
		MessageBox::Show("Invalid Data !");
	}
	else {
		String^ v = textBox1->Text;
		string v1;
		v1 = msclr::interop::marshal_as<string>(v);
		User load;
		User* arr;
		User p1;
		User* p2;
		int x, y;
		x = loaddata1(p2);
		y = p1.searchdata(p2, v1, x);
		int a = loaddata(arr);
		int b = load.searchdata(arr, v1, a);
			if (!b) {
				if (y == 1) {
					ofstream obj;
					obj.open("Report.txt", ios::app);
					obj << v1 << ",";
					v = textBox2->Text;
					v1 = msclr::interop::marshal_as<string>(v);
					obj << v1 << ",";
					v = textBox3->Text;
					v1 = msclr::interop::marshal_as<string>(v);
					obj << v1 << "\n";
					MessageBox::Show("Report Generated Successfully !");
					obj.close();
					this->Close();
				}
				else {
					MessageBox::Show("Patient Not found !");
				}

			}
			else {
				MessageBox::Show("Report of this Patient Already Exist !");
			}
	}
	
}
private: System::Void GenerateReport_Load(System::Object^ sender, System::EventArgs^ e) {
	viewtable();
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
