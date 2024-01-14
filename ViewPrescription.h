#pragma once
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
	/// Summary for AdvisePrescription
	/// </summary>
	public ref class AdvisePrescription : public System::Windows::Forms::Form
	{
	public:
		AdvisePrescription(void)
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
		~AdvisePrescription()
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
			this->dataGridView1->Location = System::Drawing::Point(0, 72);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 50;
			this->dataGridView1->Size = System::Drawing::Size(983, 395);
			this->dataGridView1->TabIndex = 4;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdvisePrescription::dataGridView1_CellContentClick);
			// 
			// ID
			// 
			this->ID->FillWeight = 32.08556F;
			this->ID->HeaderText = L"Patient ID";
			this->ID->MinimumWidth = 6;
			this->ID->Name = L"ID";
			// 
			// Payments
			// 
			this->Payments->FillWeight = 167.9145F;
			this->Payments->HeaderText = L"Prescription";
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
			this->label1->Location = System::Drawing::Point(355, 23);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(240, 32);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Patient Prescription";
			// 
			// AdvisePrescription
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(982, 458);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"AdvisePrescription";
			this->Text = L"ViewPrescription";
			this->Load += gcnew System::EventHandler(this, &AdvisePrescription::AdvisePrescription_Load);
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
			char* pres;
			string iid;
			string press;
			read.open("TrackID.txt");
			string x;
			read >> x;
			read.close();
			obj.loaddata2(load);
			int z = obj.searchdata2(load, x);
			if (z) {
				int coun = 0, i = 0, k = 0, j = 0, r = 0, c = 0;
				string a;
				read.open("prescription.txt");
				
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
						
						for (j = i + 1; a[j] != '\0'; j++)
						{
							coun++;
						}
						pres = new char[coun];
						coun = 0;
						for (int l = i + 1; a[l] != '\0'; l++)
						{
							pres[k] = a[l];
							k++;
						}
						press = charArrayToString(pres, k);
						String^ pa2 = msclr::interop::marshal_as<System::String^>(press);
						this->dataGridView1->Rows[r]->Cells[c]->Value = pa2;
						r++;
						k = 0;
						c = 0;
						delete[] id;
						delete[] pres;
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
	private: System::Void AdvisePrescription_Load(System::Object^ sender, System::EventArgs^ e) {
		view();
	}
};
}
