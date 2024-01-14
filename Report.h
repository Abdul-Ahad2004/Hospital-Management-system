#pragma once
#include"labresult.h"
#include <iostream>
#include <fstream>
#include <string>
#include<msclr\marshal_cppstd.h>
using namespace std;
void view();
namespace Windoform {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Report
	/// </summary>
	public ref class Report : public System::Windows::Forms::Form
	{
	public:
		Report(void)
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
		~Report()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Test;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Result;
	private: System::Windows::Forms::Label^ label1;

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
			this->Test = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Result = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->ID, this->Test,
					this->Result
			});
			this->dataGridView1->GridColor = System::Drawing::SystemColors::AppWorkspace;
			this->dataGridView1->Location = System::Drawing::Point(-1, 69);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 50;
			this->dataGridView1->RowTemplate->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->Size = System::Drawing::Size(782, 470);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Report::dataGridView1_CellContentClick);
			// 
			// ID
			// 
			this->ID->HeaderText = L"Patient ID";
			this->ID->MinimumWidth = 6;
			this->ID->Name = L"ID";
			// 
			// Test
			// 
			this->Test->HeaderText = L"Test";
			this->Test->MinimumWidth = 6;
			this->Test->Name = L"Test";
			// 
			// Result
			// 
			this->Result->HeaderText = L"Result";
			this->Result->MinimumWidth = 6;
			this->Result->Name = L"Result";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(297, 21);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(179, 32);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Patient Report";
			this->label1->Click += gcnew System::EventHandler(this, &Report::label1_Click);
			// 
			// Report
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(782, 537);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Report";
			this->RightToLeftLayout = true;
			this->Text = L"PatientReport";
			this->Load += gcnew System::EventHandler(this, &Report::Report_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		
#pragma endregion
		string charArrayToString(char* charArray, int size) {
			return string(charArray, size);
		}
		void view() {

			result obj;
			result* load;
			ifstream read;
			char* id;
			char* testname;
			char* result;
			string iid;
			string ttestname;
			string resultt;
			read.open("TrackID.txt");
			string x;
			read >> x;
			read.close();
			obj.loaddata1(load);
			int z = obj.searchdata1(load, x);
			if (z) {
				int coun = 0, i = 0, k = 0, j = 0,r=0,c=0;
				string a;
				read.open("Report.txt");
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
					iid = charArrayToString(id, k);
					k = 0;
					coun = 0;
					if (iid == x) {
						dataGridView1->Rows->Add();
						String^ iid1 = msclr::interop::marshal_as<System::String^>(iid);
						this->dataGridView1->Rows[r]->Cells[c]->Value = iid1;
						c++;
						for (j = i + 1; a[j] != ','; j++)
						{
							coun++;
						}
						testname = new char[coun];
						coun = 0;
						for (int l = i + 1; a[l] != ','; l++)
						{
							testname[k] = a[l];
							k++;
						}
						ttestname = charArrayToString(testname, k);
						String^ pa1 = msclr::interop::marshal_as<System::String^>(ttestname);
						this->dataGridView1->Rows[r]->Cells[c]->Value = pa1;
						c++;
						k = 0;
						coun = 0;
						for (i = j + 1; a[i] != '\0'; i++)
						{
							coun++;
						}
						result = new char[coun];
						coun = 0;
						for (int l = j + 1; a[l] != '\0'; l++)
						{
							result[k] = a[l];
							k++;
						}
						resultt = charArrayToString(result, k);
						String^ pa2 = msclr::interop::marshal_as<System::String^>(resultt);
						this->dataGridView1->Rows[r]->Cells[c]->Value = pa2;
						r++;
						k = 0;
						c = 0;
						delete[] id;
						delete[] testname;
					}
					else {
						continue;
					}
				}
				read.close();
			}

		}
		
		
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		
	}
		  
	private: System::Void Report_Load(System::Object^ sender, System::EventArgs^ e) {
		view();
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
