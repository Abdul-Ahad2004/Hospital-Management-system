#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include"Header2.h"

#include<msclr\marshal_cppstd.h>

using namespace std;

void viewtable();
string chararraytoString();

namespace Windoform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for patient_view
	/// </summary>
	public ref class patient_view : public System::Windows::Forms::Form
	{
	public:
		patient_view(void)
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
		~patient_view()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:








	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Password;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name_123;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Gender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Age;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Disease;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Medicine;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Address;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Contact;
	private: System::Windows::Forms::Label^ label1;

	protected:









	protected:









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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->ID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Password = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Name_123 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Gender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Disease = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Medicine = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Address = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Contact = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->ID, this->Password,
					this->Name_123, this->Gender, this->Age, this->Disease, this->Medicine, this->Address, this->Contact
			});
			this->dataGridView1->Location = System::Drawing::Point(-1, 82);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 62;
			this->dataGridView1->RowTemplate->Height = 35;
			this->dataGridView1->Size = System::Drawing::Size(1046, 474);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &patient_view::dataGridView1_CellContentClick_1);
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
			// Name_123
			// 
			this->Name_123->HeaderText = L"Name";
			this->Name_123->MinimumWidth = 6;
			this->Name_123->Name = L"Name_123";
			// 
			// Gender
			// 
			this->Gender->HeaderText = L"Gender";
			this->Gender->MinimumWidth = 6;
			this->Gender->Name = L"Gender";
			// 
			// Age
			// 
			this->Age->HeaderText = L"Age";
			this->Age->MinimumWidth = 6;
			this->Age->Name = L"Age";
			// 
			// Disease
			// 
			this->Disease->HeaderText = L"Disease";
			this->Disease->MinimumWidth = 6;
			this->Disease->Name = L"Disease";
			// 
			// Medicine
			// 
			this->Medicine->HeaderText = L"Medicine";
			this->Medicine->MinimumWidth = 6;
			this->Medicine->Name = L"Medicine";
			// 
			// Address
			// 
			this->Address->HeaderText = L"Address";
			this->Address->MinimumWidth = 6;
			this->Address->Name = L"Address";
			// 
			// Contact
			// 
			this->Contact->HeaderText = L"Contact";
			this->Contact->MinimumWidth = 6;
			this->Contact->Name = L"Contact";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(418, 28);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 32);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Patient\'s List";
			this->label1->Click += gcnew System::EventHandler(this, &patient_view::label1_Click);
			// 
			// patient_view
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1046, 552);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"patient_view";
			this->Text = L"patient_view";
			this->Load += gcnew System::EventHandler(this, &patient_view::patient_view_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

		string charArrayToString(char* charArray, int size)
		{
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
			while (getline(read, a))
			{
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

				//masla

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
				string* aage = new string;
				*aage = charArrayToString(age, k);
				String^ agee1 = msclr::interop::marshal_as<System::String^>(*aage);
				this->dataGridView1->Rows[r]->Cells[c]->Value = agee1;

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
				String^ dis = msclr::interop::marshal_as<System::String^>(arr[arrcount].disease);
				this->dataGridView1->Rows[r]->Cells[c]->Value = dis;


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
				String^ med = msclr::interop::marshal_as<System::String^>(arr[arrcount].medicine);
				this->dataGridView1->Rows[r]->Cells[c]->Value = med;

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
				String^ add1 = msclr::interop::marshal_as<System::String^>(arr[arrcount].address);
				this->dataGridView1->Rows[r]->Cells[c]->Value = add1;


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
				String^ cont1 = msclr::interop::marshal_as<System::String^>(arr[arrcount].phone_no);
				this->dataGridView1->Rows[r]->Cells[c]->Value = cont1;


				c++;
				arrcount++;
				r++;
				c = 0;
				k = 0;
				delete[] id;
				id = NULL;
				delete[] pass;
				pass = NULL;
				delete[] name;
				name == NULL;
				delete[] address;
				address = NULL;
				delete[] age;
				age = NULL;
				delete[] disease;
				disease = NULL;
				delete[] medicine;
				medicine = NULL;
				delete[] contact;
				contact = NULL;
				delete[]gender;
				gender = NULL;
			}
		}
#pragma endregion
	private: System::Void patient_view_Load(System::Object^ sender, System::EventArgs^ e) {
		viewtable();
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void dataGridView1_CellContentClick_1(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
