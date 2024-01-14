#pragma once

#include"DocInfo.h"
#include<string>
#include<fstream>
#include<msclr\marshal_cppstd.h>

namespace Windoform {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddDocRec
	/// </summary>
	public ref class AddDocRec : public System::Windows::Forms::Form
	{
	public:
		AddDocRec(void)
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
		~AddDocRec()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ DocID;
	private: System::Windows::Forms::TextBox^ Age;
	private: System::Windows::Forms::TextBox^ Namedoc;




	private: System::Windows::Forms::TextBox^ Pass;
	private: System::Windows::Forms::TextBox^ Address;
	private: System::Windows::Forms::TextBox^ qualification;
	private: System::Windows::Forms::TextBox^ contact;
	private: System::Windows::Forms::TextBox^ salary;
	private: System::Windows::Forms::Button^ buttonAdd;






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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddDocRec::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->DocID = (gcnew System::Windows::Forms::TextBox());
			this->Age = (gcnew System::Windows::Forms::TextBox());
			this->Namedoc = (gcnew System::Windows::Forms::TextBox());
			this->Pass = (gcnew System::Windows::Forms::TextBox());
			this->Address = (gcnew System::Windows::Forms::TextBox());
			this->qualification = (gcnew System::Windows::Forms::TextBox());
			this->contact = (gcnew System::Windows::Forms::TextBox());
			this->salary = (gcnew System::Windows::Forms::TextBox());
			this->buttonAdd = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(26, 86);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(153, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Doctor ID:";
			this->label1->Click += gcnew System::EventHandler(this, &AddDocRec::label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(26, 152);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(147, 38);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Password:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(26, 483);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(173, 38);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Contact No.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(26, 551);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(106, 38);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Salary:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(26, 414);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(194, 38);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Qualification:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(26, 275);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(77, 38);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Age:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(26, 342);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(129, 38);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Address:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Segoe UI", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(26, 211);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(103, 38);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Name:";
			// 
			// DocID
			// 
			this->DocID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DocID->Location = System::Drawing::Point(218, 86);
			this->DocID->Name = L"DocID";
			this->DocID->Size = System::Drawing::Size(182, 30);
			this->DocID->TabIndex = 8;
			// 
			// Age
			// 
			this->Age->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Age->Location = System::Drawing::Point(218, 275);
			this->Age->Name = L"Age";
			this->Age->Size = System::Drawing::Size(182, 30);
			this->Age->TabIndex = 9;
			// 
			// Namedoc
			// 
			this->Namedoc->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Namedoc->Location = System::Drawing::Point(218, 211);
			this->Namedoc->Name = L"Namedoc";
			this->Namedoc->Size = System::Drawing::Size(249, 30);
			this->Namedoc->TabIndex = 10;
			// 
			// Pass
			// 
			this->Pass->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Pass->Location = System::Drawing::Point(218, 152);
			this->Pass->Name = L"Pass";
			this->Pass->Size = System::Drawing::Size(182, 30);
			this->Pass->TabIndex = 11;
			// 
			// Address
			// 
			this->Address->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Address->Location = System::Drawing::Point(218, 342);
			this->Address->Name = L"Address";
			this->Address->Size = System::Drawing::Size(405, 30);
			this->Address->TabIndex = 12;
			// 
			// qualification
			// 
			this->qualification->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->qualification->Location = System::Drawing::Point(218, 414);
			this->qualification->Name = L"qualification";
			this->qualification->Size = System::Drawing::Size(230, 30);
			this->qualification->TabIndex = 13;
			// 
			// contact
			// 
			this->contact->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->contact->Location = System::Drawing::Point(218, 483);
			this->contact->Name = L"contact";
			this->contact->Size = System::Drawing::Size(249, 30);
			this->contact->TabIndex = 14;
			// 
			// salary
			// 
			this->salary->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->salary->Location = System::Drawing::Point(218, 556);
			this->salary->Name = L"salary";
			this->salary->Size = System::Drawing::Size(182, 30);
			this->salary->TabIndex = 15;
			this->salary->TextChanged += gcnew System::EventHandler(this, &AddDocRec::salary_TextChanged);
			// 
			// buttonAdd
			// 
			this->buttonAdd->BackColor = System::Drawing::Color::Red;
			this->buttonAdd->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->buttonAdd->Font = (gcnew System::Drawing::Font(L"Times New Roman", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->buttonAdd->ForeColor = System::Drawing::Color::White;
			this->buttonAdd->Location = System::Drawing::Point(547, 551);
			this->buttonAdd->Name = L"buttonAdd";
			this->buttonAdd->Size = System::Drawing::Size(121, 41);
			this->buttonAdd->TabIndex = 16;
			this->buttonAdd->Text = L"ADD";
			this->buttonAdd->UseVisualStyleBackColor = false;
			this->buttonAdd->Click += gcnew System::EventHandler(this, &AddDocRec::label1_Click);
			// 
			// AddDocRec
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(782, 653);
			this->Controls->Add(this->buttonAdd);
			this->Controls->Add(this->salary);
			this->Controls->Add(this->contact);
			this->Controls->Add(this->qualification);
			this->Controls->Add(this->Address);
			this->Controls->Add(this->Pass);
			this->Controls->Add(this->Namedoc);
			this->Controls->Add(this->Age);
			this->Controls->Add(this->DocID);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AddDocRec";
			this->Text = L"AddDocRec";
			this->Load += gcnew System::EventHandler(this, &AddDocRec::AddDocRec_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		
		int count = 0,c2=0;
		bool flag = false, flag2 = false;
		String^ v = salary->Text;
		string v1;
		v1 = msclr::interop::marshal_as<string>(v);
		String^ c = contact->Text;
		string c1;
		c1 = msclr::interop::marshal_as<string>(c);
		String^ c3 = Age->Text;
		string c4;
		c4 = msclr::interop::marshal_as<string>(c3);
		for (int i = 0; c1[i] != '\0'; i++)
		{
			count++;
			if (int(c1[i]) < 48 || int(c1[i]) > 57) {
				flag = true;
			}

		}
		for (int i = 0; c4[i] != '\0'; i++)
		{
			if (int(c4[i]) < 48 || int(c4[i]) > 57) {
				c2 = 1;
			}

		}
		for (int i = 0; v1[i] != '\0'; i++)
		{
			if (int(v1[i]) < 48 || int(v1[i]) > 57) {
				flag2=true;
			}

		}
		if (Address->Text == "" || qualification->Text == "" || Age->Text == "" || Namedoc->Text == "" || salary->Text == "" || contact->Text == "" || Pass->Text == "" || DocID->Text == "") {
			MessageBox::Show("Invalid Data ! ");
		}
		else if (count < 11 || flag == true) {
			MessageBox::Show("Invalid Phone number (it must contain 11 digits and should be numeric only)! ");
			flag = false;
		}
		else if (c2 == 1) {
			MessageBox::Show("Invalid Age ! ");
		}
		else if (flag2) {
			MessageBox::Show("Invalid Salary ! ");
		}
		else {
			int counter = 0,z;
			string a,id;
			String^ z1 = DocID->Text;
			id = msclr::interop::marshal_as<string>(z1);
			ifstream obj1;
			obj1.open("DoctorsInformation.txt");
			while (getline(obj1, a)) {
				counter++;
			}
			obj1.close();
			doc load;
			doc* arr = new doc[counter];
			z=load.load_data(arr,counter,id);
			if (z) {
				ofstream obj2;
				obj2.open("DoctorsInformation.txt",ios::app);
				
				obj2 << id << ",";
				z1 = Pass->Text;
				id = msclr::interop::marshal_as<string>(z1);
				obj2 << id << ",";
				z1 = Namedoc->Text;
				id = msclr::interop::marshal_as<string>(z1);
				obj2 << id << ",";
				z1 = Age->Text;
				id = msclr::interop::marshal_as<string>(z1);
				obj2 << id << ",";
				z1 = Address->Text;
				id = msclr::interop::marshal_as<string>(z1);
				obj2 << id << ",";
				z1 = contact->Text;
				id = msclr::interop::marshal_as<string>(z1);
				obj2 << id << ",";
				z1 = qualification->Text;
				id = msclr::interop::marshal_as<string>(z1);
				obj2 << id << ",";
				z1 = salary->Text;
				id = msclr::interop::marshal_as<string>(z1);
				obj2 << id<<"\n";
				obj2.close();
				MessageBox::Show("Data Added Successfully ! ");
				delete[]arr;
				this->Close();
			}
			else {
				MessageBox::Show("Unique Doctor Id already Exist ! ");
			}
			
			
		}
	}

private: System::Void AddDocRec_Load(System::Object^ sender, System::EventArgs^ e) {
	
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void salary_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}

