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
	/// Summary for ViewFeedback
	/// </summary>
	public ref class ViewFeedback : public System::Windows::Forms::Form
	{
	public:
		ViewFeedback(void)
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
		~ViewFeedback()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ FeedBack;
	private: System::Windows::Forms::Label^ label1;

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
			this->FeedBack = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
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
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->FeedBack });
			this->dataGridView1->Location = System::Drawing::Point(3, 62);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 50;
			this->dataGridView1->Size = System::Drawing::Size(983, 395);
			this->dataGridView1->TabIndex = 5;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &ViewFeedback::dataGridView1_CellContentClick);
			// 
			// FeedBack
			// 
			this->FeedBack->FillWeight = 167.9145F;
			this->FeedBack->HeaderText = L"FeedBack";
			this->FeedBack->MinimumWidth = 6;
			this->FeedBack->Name = L"FeedBack";
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(346, 18);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(224, 32);
			this->label1->TabIndex = 7;
			this->label1->Text = L"Patient\'s FeedBack";
			// 
			// ViewFeedback
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->ClientSize = System::Drawing::Size(982, 458);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"ViewFeedback";
			this->Text = L"ViewFeedback";
			this->Load += gcnew System::EventHandler(this, &ViewFeedback::ViewFeedback_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		void view() {
			ifstream read;
			char* id;
			char* pres;
			string iid;
			string press;
			
			int coun = 0,r=0,c=0;
				string a;
				read.open("Feedback.txt");

				while (getline(read, a)) {
					coun++;
			
				}
				read.close();
				read.open("Feedback.txt");
				for (int i = 0; i < coun; i++)
				{
					getline(read, a, '\n');
					String^ pa2 = msclr::interop::marshal_as<System::String^>(a);
					dataGridView1->Rows->Add();
					this->dataGridView1->Rows[r]->Cells[c]->Value = pa2;
					r++;
				}
				read.close();
			}

	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void ViewFeedback_Load(System::Object^ sender, System::EventArgs^ e) {
		view();
	}
};
}
