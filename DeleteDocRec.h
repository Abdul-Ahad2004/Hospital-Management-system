#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include<Windows.h>
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
	/// Summary for DeleteDocRec
	/// </summary>
	public ref class DeleteDocRec : public System::Windows::Forms::Form
	{
		int Index;
	public:
		DeleteDocRec(void)
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
		~DeleteDocRec()
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
	private: System::Windows::Forms::DataGridViewButtonColumn^ Delete;




































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
			this->Age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Address = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Phone = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Qualification = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Salary = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Delete = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
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
					this->Name123, this->Age, this->Address, this->Phone, this->Qualification, this->Salary, this->Delete
			});
			this->dataGridView1->Location = System::Drawing::Point(249, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 35;
			this->dataGridView1->Size = System::Drawing::Size(968, 647);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &DeleteDocRec::dataGridView1_CellClick);
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &DeleteDocRec::dataGridView1_CellContentClick);
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
			// Delete
			// 
			this->Delete->HeaderText = L"Action";
			this->Delete->MinimumWidth = 6;
			this->Delete->Name = L"Delete";
			this->Delete->Text = L"Delete";
			this->Delete->UseColumnTextForButtonValue = true;
			// 
			// Import
			// 
			this->Import->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->Import->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Import->Location = System::Drawing::Point(47, 249);
			this->Import->Name = L"Import";
			this->Import->Size = System::Drawing::Size(162, 40);
			this->Import->TabIndex = 3;
			this->Import->Text = L"Import Data";
			this->Import->UseVisualStyleBackColor = false;
			this->Import->Click += gcnew System::EventHandler(this, &DeleteDocRec::Import_Click);
			// 
			// DeleteDocRec
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1218, 652);
			this->Controls->Add(this->Import);
			this->Controls->Add(this->dataGridView1);
			this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Name = L"DeleteDocRec";
			this->Text = L"DeleteDocRec";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

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
		void viewtable1() {
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
	private: System::Void Import_Click(System::Object^ sender, System::EventArgs^ e) {
		viewtable();

	}
private: System::Void dataGridView1_CellClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	if (dataGridView1->Columns[e->ColumnIndex]->HeaderText == "Action") {
		Windows::Forms::DialogResult result= MessageBox::Show("Do you want to continue?", "Confirmation", MessageBoxButtons::YesNo, MessageBoxIcon::Question);
		if (result == Windows::Forms::DialogResult::Yes) {

			Object^ a = (dataGridView1->Rows[e->RowIndex]->Cells["ID"]->Value);
			String^ id = Convert::ToString(a);
			string iid;
			iid = msclr::interop::marshal_as<std::string>(id);
			doc load;
			doc* arr;
			load.load(arr);
			load.deletedata(arr, iid);
			MessageBox::Show("Successfully Deleted! ");
			Index = dataGridView1->CurrentCell->RowIndex;
			dataGridView1->Rows->RemoveAt(Index);
		}
		
		
	}
		
}
};
}
