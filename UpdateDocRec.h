#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include<msclr\marshal_cppstd.h>
#include"AddDocRec.h"
#include"UpdateBox.h"
using namespace std;
namespace Windoform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for UpdateDocRec
	/// </summary>
	public ref class UpdateDocRec : public System::Windows::Forms::Form
	{
	public:
		UpdateDocRec(void)
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
		~UpdateDocRec()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;








	private: System::Windows::Forms::Button^ Import;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Password;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name123;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Age;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Address;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Phone;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Qualification;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Salary;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Update;






























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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Password = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name123 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Address = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Phone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Qualification = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Salary = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Update = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			this->Import = (gcnew System::Windows::Forms::Button());
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
					this->Name123, this->Age, this->Address, this->Phone, this->Qualification, this->Salary, this->Update
			});
			this->dataGridView1->Location = System::Drawing::Point(236, 3);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 35;
			this->dataGridView1->Size = System::Drawing::Size(980, 647);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UpdateDocRec::dataGridView1_CellContentClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &UpdateDocRec::dataGridView1_CellContentClick_1);
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
			// Age
			// 
			this->Age->HeaderText = L"Age";
			this->Age->MinimumWidth = 6;
			this->Age->Name = L"Age";
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
			// Qualification
			// 
			this->Qualification->HeaderText = L"Qualification";
			this->Qualification->MinimumWidth = 6;
			this->Qualification->Name = L"Qualification";
			// 
			// Salary
			// 
			this->Salary->HeaderText = L"Salary";
			this->Salary->MinimumWidth = 6;
			this->Salary->Name = L"Salary";
			// 
			// Update
			// 
			this->Update->HeaderText = L"Action";
			this->Update->MinimumWidth = 6;
			this->Update->Name = L"Update";
			this->Update->Text = L"Update";
			this->Update->UseColumnTextForButtonValue = true;
			// 
			// Import
			// 
			this->Import->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Import->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Import->Location = System::Drawing::Point(26, 255);
			this->Import->Name = L"Import";
			this->Import->Size = System::Drawing::Size(162, 40);
			this->Import->TabIndex = 2;
			this->Import->Text = L"Import Data";
			this->Import->UseVisualStyleBackColor = false;
			this->Import->Click += gcnew System::EventHandler(this, &UpdateDocRec::Import_Click);
			// 
			// UpdateDocRec
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1218, 652);
			this->Controls->Add(this->Import);
			this->Controls->Add(this->dataGridView1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"UpdateDocRec";
			this->Text = L"UpdateDocRec";
			this->Load += gcnew System::EventHandler(this, &UpdateDocRec::UpdateDocRec_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		
		string charArrayToString(char* charArray, int size) {
			return string(charArray, size);
		}
		void updatetable() {
			ifstream read;
			int count = 0, arrcount = 0;
			int r = 0, c = 0;
			char* id;
			char* pass;
			char* name;
			char* address;
			char* age;
			char* qual;
			char* salary;
			char* contact;
			read.open("DoctorsInformation.txt");
			string a;
			while (getline(read, a)) {
				count++;
			}
			doc* arr = new doc[count];
			read.close();
			read.open("DoctorsInformation.txt");
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
				age = new char[coun];
				coun = 0;
				for (int l = i + 1; a[l] != ','; l++)
				{
					age[k] = a[l];
					k++;
				}
				string* aage = new string;
				*aage = charArrayToString(age, k);
				String^ agee1 = msclr::interop::marshal_as<System::String^>(*aage);
				this->dataGridView1->Rows[r]->Cells[c]->Value = agee1;
				c++;
				k = 0;
				for (i = j + 1; a[i] != ','; i++)
				{
					coun++;
				}
				address = new char[coun];
				coun = 0;
				for (int l = j + 1; a[l] != ','; l++)
				{
					address[k] = a[l];
					k++;
				}
				arr[arrcount].address = charArrayToString(address, k);
				String^ add1 = msclr::interop::marshal_as<System::String^>(arr[arrcount].address);
				this->dataGridView1->Rows[r]->Cells[c]->Value = add1;
				c++;
				k = 0;
				for (j = i + 1; a[j] != ','; j++)
				{
					coun++;
				}
				contact = new char[coun];
				coun = 0;
				for (int l = i + 1; a[l] != ','; l++)
				{
					contact[k] = a[l];
					k++;
				}
				arr[arrcount].phone_no = charArrayToString(contact, k);
				String^ cont1 = msclr::interop::marshal_as<System::String^>(arr[arrcount].phone_no);
				this->dataGridView1->Rows[r]->Cells[c]->Value = cont1;
				c++;
				k = 0;
				for (i = j + 1; a[i] != ','; i++)
				{
					coun++;
				}
				qual = new char[coun];
				coun = 0;
				for (int l = j + 1; a[l] != ','; l++)
				{
					qual[k] = a[l];
					k++;
				}
				arr[arrcount].qualification = charArrayToString(qual, k);
				String^ qu1 = msclr::interop::marshal_as<System::String^>(arr[arrcount].qualification);
				this->dataGridView1->Rows[r]->Cells[c]->Value = qu1;
				c++;
				k = 0;
				for (j = i + 1; a[j] != '\0'; j++)
				{
					coun++;
				}
				salary = new char[coun];
				coun = 0;
				for (int l = i + 1; a[l] != '\0'; l++)
				{
					salary[k] = a[l];
					k++;
				}
				arr[arrcount].salary = charArrayToString(salary, k);
				String^ sa1 = msclr::interop::marshal_as<System::String^>(arr[arrcount].salary);
				this->dataGridView1->Rows[r]->Cells[c]->Value = sa1;
				c++;
				arrcount++;
				r++;
				c = 0;
				k = 0;
				delete[] id;
				delete[] pass;
				delete[] name;
				delete[] address;
				delete[] age;
				delete[] qual;
				delete[] salary;
				delete[] contact;
			}
		}
		void updatetable2() {
			ifstream read;
			int count = 0, arrcount = 0;
			int r = 0, c = 0;
			char* id;
			char* pass;
			char* name;
			char* address;
			char* age;
			char* qual;
			char* salary;
			char* contact;
			read.open("DoctorsInformation.txt");
			string a;
			while (getline(read, a)) {
				count++;
			}
			doc* arr = new doc[count];
			read.close();
			read.open("DoctorsInformation.txt");
			int coun = 0, i = 0, k = 0, j = 0;
			while (getline(read, a)) {
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
				age = new char[coun];
				coun = 0;
				for (int l = i + 1; a[l] != ','; l++)
				{
					age[k] = a[l];
					k++;
				}
				string* aage = new string;
				*aage = charArrayToString(age, k);
				String^ agee1 = msclr::interop::marshal_as<System::String^>(*aage);
				this->dataGridView1->Rows[r]->Cells[c]->Value = agee1;
				c++;
				k = 0;
				for (i = j + 1; a[i] != ','; i++)
				{
					coun++;
				}
				address = new char[coun];
				coun = 0;
				for (int l = j + 1; a[l] != ','; l++)
				{
					address[k] = a[l];
					k++;
				}
				arr[arrcount].address = charArrayToString(address, k);
				String^ add1 = msclr::interop::marshal_as<System::String^>(arr[arrcount].address);
				this->dataGridView1->Rows[r]->Cells[c]->Value = add1;
				c++;
				k = 0;
				for (j = i + 1; a[j] != ','; j++)
				{
					coun++;
				}
				contact = new char[coun];
				coun = 0;
				for (int l = i + 1; a[l] != ','; l++)
				{
					contact[k] = a[l];
					k++;
				}
				arr[arrcount].phone_no = charArrayToString(contact, k);
				String^ cont1 = msclr::interop::marshal_as<System::String^>(arr[arrcount].phone_no);
				this->dataGridView1->Rows[r]->Cells[c]->Value = cont1;
				c++;
				k = 0;
				for (i = j + 1; a[i] != ','; i++)
				{
					coun++;
				}
				qual = new char[coun];
				coun = 0;
				for (int l = j + 1; a[l] != ','; l++)
				{
					qual[k] = a[l];
					k++;
				}
				arr[arrcount].qualification = charArrayToString(qual, k);
				String^ qu1 = msclr::interop::marshal_as<System::String^>(arr[arrcount].qualification);
				this->dataGridView1->Rows[r]->Cells[c]->Value = qu1;
				c++;
				k = 0;
				for (j = i + 1; a[j] != '\0'; j++)
				{
					coun++;
				}
				salary = new char[coun];
				coun = 0;
				for (int l = i + 1; a[l] != '\0'; l++)
				{
					salary[k] = a[l];
					k++;
				}
				arr[arrcount].salary = charArrayToString(salary, k);
				String^ sa1 = msclr::interop::marshal_as<System::String^>(arr[arrcount].salary);
				this->dataGridView1->Rows[r]->Cells[c]->Value = sa1;
				c++;
				arrcount++;
				r++;
				c = 0;
				k = 0;
				delete[] id;
				delete[] pass;
				delete[] name;
				delete[] address;
				delete[] age;
				delete[] qual;
				delete[] salary;
				delete[] contact;
			}
		}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (dataGridView1->Columns[e->ColumnIndex]->HeaderText == "Action") {

			Object^a = (dataGridView1->Rows[e->RowIndex]->Cells["ID"]->Value);
			String^ id = Convert::ToString(a);
			string iid;
			iid =  msclr::interop::marshal_as<std::string>(id);
			string name, age, qual, add, salary, pass,phone;
			String^ name1 = Convert::ToString(dataGridView1->Rows[e->RowIndex]->Cells["Name123"]->Value);
			name= msclr::interop::marshal_as<string>(name1);
			name1 = Convert::ToString(dataGridView1->Rows[e->RowIndex]->Cells["Password"]->Value);
			pass = msclr::interop::marshal_as<string>(name1);
			 name1 = Convert::ToString(dataGridView1->Rows[e->RowIndex]->Cells["Address"]->Value);
			add = msclr::interop::marshal_as<string>(name1);
			 name1 = Convert::ToString(dataGridView1->Rows[e->RowIndex]->Cells["Age"]->Value);
			age = msclr::interop::marshal_as<string>(name1);
			 name1 = Convert::ToString(dataGridView1->Rows[e->RowIndex]->Cells["Qualification"]->Value);
			qual = msclr::interop::marshal_as<string>(name1);
			 name1 = Convert::ToString(dataGridView1->Rows[e->RowIndex]->Cells["Phone"]->Value);
			phone = msclr::interop::marshal_as<string>(name1);
			 name1 = Convert::ToString(dataGridView1->Rows[e->RowIndex]->Cells["Salary"]->Value);
			salary = msclr::interop::marshal_as<string>(name1);
			UpdateBox^ obj = gcnew UpdateBox(iid,pass,name,age,add,phone,qual,salary);
			this->Hide();
			obj->ShowDialog();
			this->Show();
			updatetable2();

		
		}
	}

	private: System::Void Import_Click(System::Object^ sender, System::EventArgs^ e) {
		updatetable();
		
	}
	private: System::Void Enter123_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void UpdateDocRec_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}

