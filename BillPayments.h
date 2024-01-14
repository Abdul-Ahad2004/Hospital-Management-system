#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include<msclr\marshal_cppstd.h>
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
	/// Summary for BillPayments
	/// </summary>
	public ref class BillPayments : public System::Windows::Forms::Form
	{
	public:
		BillPayments(void)
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
		~BillPayments()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Payments;
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
			this->Payments = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->ID, this->Payments });
			this->dataGridView1->Location = System::Drawing::Point(-5, 83);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 50;
			this->dataGridView1->Size = System::Drawing::Size(834, 452);
			this->dataGridView1->TabIndex = 3;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &BillPayments::dataGridView1_CellContentClick);
			// 
			// ID
			// 
			this->ID->HeaderText = L"Patient ID";
			this->ID->MinimumWidth = 6;
			this->ID->Name = L"ID";
			// 
			// Payments
			// 
			this->Payments->HeaderText = L"Payment";
			this->Payments->MinimumWidth = 6;
			this->Payments->Name = L"Payments";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(306, 36);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(176, 32);
			this->label1->TabIndex = 4;
			this->label1->Text = L"Payment\'s List";
			// 
			// BillPayments
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(829, 532);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"BillPayments";
			this->Text = L"BillPayments";
			this->Load += gcnew System::EventHandler(this, &BillPayments::BillPayments_Load);
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
			int count = 0;
			int r = 0, c = 0;
			char* id;
			char* payment;
			string iid;
			string paymentt;
			
			read.open("Bill Payment.txt");
			string a;
			while (getline(read, a)) {
				count++;
			}
			read.close();
			read.open("Bill Payment.txt");
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
				iid = charArrayToString(id, k);
				String^ iid1 = msclr::interop::marshal_as<System::String^>(iid);
				this->dataGridView1->Rows[r]->Cells[c]->Value = iid1;
				c++;
				k = 0;
				coun = 0;
				for (j = i + 1; a[j] != '\0'; j++)
				{
					coun++;
				}
				payment = new char[coun];
				coun = 0;
				for (int l = i + 1; a[l] != '\0'; l++)
				{
					payment[k] = a[l];
					k++;
				}
				paymentt = charArrayToString(payment, k);
				String^ pa1 = msclr::interop::marshal_as<System::String^>(paymentt);
				this->dataGridView1->Rows[r]->Cells[c]->Value = pa1;
				r++;
				k = 0;	
				c = 0;
				delete[] id;
				delete[] payment;
			}
		}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void BillPayments_Load(System::Object^ sender, System::EventArgs^ e) {
		viewtable();
	}
};
}
