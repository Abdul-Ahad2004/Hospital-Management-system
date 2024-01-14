#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<msclr\marshal_cppstd.h>
#include"Header1.h"
using namespace std;
void viewtable();
string tostring(int d, int m, int y);
string charArrayToString(char* charArray, int size);
namespace Windoform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for ViewApp
	/// </summary>
	public ref class ViewApp1 : public System::Windows::Forms::Form
	{
	public:
		ViewApp1(void)
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
		~ViewApp1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column4;






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
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column3, this->Column4
			});
			this->dataGridView1->Location = System::Drawing::Point(-3, 63);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 35;
			this->dataGridView1->Size = System::Drawing::Size(1051, 495);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ViewApp1::dataGridView1_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Patient ID";
			this->Column1->MinimumWidth = 6;
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 250;
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Patient Name";
			this->Column2->MinimumWidth = 6;
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 250;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Date";
			this->Column3->MinimumWidth = 6;
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 250;
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Time";
			this->Column4->MinimumWidth = 6;
			this->Column4->Name = L"Column4";
			this->Column4->ReadOnly = true;
			this->Column4->Width = 250;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Control;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Location = System::Drawing::Point(389, 9);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(212, 32);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Appointment List";
			// 
			// ViewApp1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(1046, 552);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"ViewApp1";
			this->Text = L"ViewApp1";
			this->Load += gcnew System::EventHandler(this, &ViewApp1::ViewApp1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		string charArrayToString(char* charArray, int size) {
			return string(charArray, size);
		}
		string tostring(int d, int m, int y)
		{
			string s = "";
			s += to_string(d);
			s += "-";
			s += to_string(m);
			s += "-";
			s += to_string(y);
			return s;
		}
		bool check(char* arr, int s, string s1)
		{
			int count = 0;
			for (int i = 0; i < s; i++)
			{
				if (arr[i] == s1[i])
					count++;
			}
			if (count == s)
				return true;
			return false;
		}
		void viewtable(string txt, int m) {
			ifstream read;

			int r = 0, c = 0;
			char* id;
			char* name;
			char* date;
			char* month;
			char* year;
			char* time;
			int arrcount = 0;

			Appointment* arr = new Appointment[m];
			string a;
			read.open("Appointment.txt");

			while (getline(read, a)) {
				int coun = 0, i = 0, k = 0, j = 0;
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
				if (check(id, k, txt))
				{
					dataGridView1->Rows->Add();

					if (a == "") {
						break;
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
					name = new char[coun];
					coun = 0;
					for (int l = i + 1; a[l] != ','; l++)
					{
						name[k] = a[l];
						k++;
					}
					arr[arrcount].name = charArrayToString(name, k);
					String^ n = msclr::interop::marshal_as<System::String^>(arr[arrcount].name);
					this->dataGridView1->Rows[r]->Cells[c]->Value = n;
					c++;
					k = 0;
					for (i = j + 1; a[i] != '-'; i++)
					{
						coun++;
					}
					date = new char[coun];
					coun = 0;
					for (int l = j + 1; a[l] != '-'; l++)
					{
						date[k] = a[l];
						k++;
					}
					string s1 = charArrayToString(date, k);
					arr[arrcount].date = stoi(s1);
					k = 0;
					for (j = i + 1; a[j] != '-'; j++)
					{
						coun++;
					}
					month = new char[coun];
					coun = 0;
					for (int l = i + 1; a[l] != '-'; l++)
					{
						month[k] = a[l];
						k++;
					}
					arr[arrcount].month = stoi(charArrayToString(month, k));
					k = 0;
					for (i = j + 1; a[i] != ','; i++)
					{
						coun++;
					}
					year = new char[coun];
					coun = 0;
					for (int l = j + 1; a[l] != ','; l++)
					{
						year[k] = a[l];
						k++;
					}
					arr[arrcount].year = stoi(charArrayToString(year, k));
					string ddi = tostring(arr[arrcount].date, arr[arrcount].month, arr[arrcount].year);
					String^ add1 = msclr::interop::marshal_as<System::String^>(ddi);
					this->dataGridView1->Rows[r]->Cells[c]->Value = add1;
					c++;
					k = 0;
					for (j = i + 1; a[j] != '\0'; j++)
					{
						coun++;
					}
					time = new char[coun];
					coun = 0;
					for (int l = i + 1; a[l] != '\0'; l++)
					{
						time[k] = a[l];
						k++;
					}
					arr[arrcount].time = charArrayToString(time, k);
					String^ sa1 = msclr::interop::marshal_as<System::String^>(arr[arrcount].time);
					this->dataGridView1->Rows[r]->Cells[c]->Value = sa1;
					c++;
					arrcount++;
					r++;
					c = 0;
					k = 0;
					delete[] id;
					delete[] name;
					delete[] date;
					delete[] month;
					delete[] year;
					delete[] time;
				}
			}
			id = NULL;
			name = NULL;
			date = NULL;
			month = NULL;
			year = NULL;
			time = NULL;
		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}

	private: System::Void ViewApp1_Load(System::Object^ sender, System::EventArgs^ e) {
		Appointment obj1;
		Appointment* arr1;
		int l = obj1.loaddata(arr1);

		string s1;
		ifstream f1;
		f1.open("TrackID.txt");
		getline(f1, s1);
		f1.close();
		int countee = obj1.searchdata(arr1, s1, l);
		if (countee > 0) {
			viewtable(s1, countee);
			delete[] arr1;
			arr1 = NULL;
		}
		else{
			delete[] arr1;
			arr1 = NULL;
			/*MessageBox::Show("You have no appointment");*/
		}
	}
	};
}
