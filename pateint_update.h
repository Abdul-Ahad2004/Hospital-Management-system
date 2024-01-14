#pragma once
#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include"Header2.h"
#include"patient_update_box.h"
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
	/// Summary for pateint_update
	/// </summary>
	public ref class pateint_update : public System::Windows::Forms::Form
	{
	public:
		pateint_update(void)
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
		~pateint_update()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:









	private: System::Windows::Forms::Button^ Import;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Password;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Name1234;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Gender;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Age;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Disease;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Medicine;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Address;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Contact;
	private: System::Windows::Forms::DataGridViewButtonColumn^ Update;











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
			this->Name1234 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Gender = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Disease = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Medicine = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Address = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Contact = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->dataGridView1->ColumnHeadersHeight = 29;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->ID, this->Password,
					this->Name1234, this->Gender, this->Age, this->Disease, this->Medicine, this->Address, this->Contact, this->Update
			});
			this->dataGridView1->Location = System::Drawing::Point(251, 2);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(968, 647);
			this->dataGridView1->TabIndex = 2;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &pateint_update::dataGridView1_CellContentClick);
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
			// Name1234
			// 
			this->Name1234->HeaderText = L"Name";
			this->Name1234->MinimumWidth = 6;
			this->Name1234->Name = L"Name1234";
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
			this->Medicine->MinimumWidth = 8;
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
			this->Import->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->Import->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Import->Location = System::Drawing::Point(48, 240);
			this->Import->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Import->Name = L"Import";
			this->Import->Size = System::Drawing::Size(148, 61);
			this->Import->TabIndex = 3;
			this->Import->Text = L"Import Data";
			this->Import->UseVisualStyleBackColor = true;
			this->Import->Click += gcnew System::EventHandler(this, &pateint_update::Import_Click);
			// 
			// pateint_update
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1218, 646);
			this->Controls->Add(this->Import);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"pateint_update";
			this->Text = L"pateint_update";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}

		string charArrayToString(char* charArray, int size)
		{
			return string(charArray, size);
		}
		void updatetable2() {
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
		void viewtable()
		{
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
	private: System::Void Import_Click(System::Object^ sender, System::EventArgs^ e) {
		viewtable();
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		if (dataGridView1->Columns[e->ColumnIndex]->HeaderText == "Action") {

			Object^ a = (dataGridView1->Rows[e->RowIndex]->Cells["ID"]->Value);
			String^ id = Convert::ToString(a);
			string iid;
			iid = msclr::interop::marshal_as<std::string>(id);
			string name, age, pass, add, dis, med, phone, gen;
			String^ name1 = Convert::ToString(dataGridView1->Rows[e->RowIndex]->Cells["Name1234"]->Value);
			name = msclr::interop::marshal_as<string>(name1);
			name1 = Convert::ToString(dataGridView1->Rows[e->RowIndex]->Cells["Password"]->Value);
			pass = msclr::interop::marshal_as<string>(name1);
			name1 = Convert::ToString(dataGridView1->Rows[e->RowIndex]->Cells["Address"]->Value);
			add = msclr::interop::marshal_as<string>(name1);
			name1 = Convert::ToString(dataGridView1->Rows[e->RowIndex]->Cells["Age"]->Value);
			age = msclr::interop::marshal_as<string>(name1);
			name1 = Convert::ToString(dataGridView1->Rows[e->RowIndex]->Cells["Disease"]->Value);
			dis = msclr::interop::marshal_as<string>(name1);
			name1 = Convert::ToString(dataGridView1->Rows[e->RowIndex]->Cells["Medicine"]->Value);
			med = msclr::interop::marshal_as<string>(name1);
			name1 = Convert::ToString(dataGridView1->Rows[e->RowIndex]->Cells["Gender"]->Value);
			gen = msclr::interop::marshal_as<string>(name1);
			name1 = Convert::ToString(dataGridView1->Rows[e->RowIndex]->Cells["Contact"]->Value);
			phone = msclr::interop::marshal_as<string>(name1);
			patient_update_box^ obj = gcnew patient_update_box(iid, pass, name, gen, age, dis, med, add, phone);
			this->Hide();
			obj->ShowDialog();
			this->Show();
			updatetable2();


		}

	}
	};
}
